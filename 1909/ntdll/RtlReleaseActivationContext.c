/*
 * XREFs of RtlReleaseActivationContext @ 0x1800373A0
 * Callers:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800267DC (sxsisol_SearchActCtxForDllName.c)
 *     RtlpTpWorkUnposted @ 0x18002F180 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeActivationContextStack @ 0x18006EC10 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x18006ED50 (RtlDeactivateActivationContext.c)
 *     LdrpFindDllActivationContext @ 0x18006F4D4 (LdrpFindDllActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800739E0 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x18007D5E0 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074CA0 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180083164 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DE9C8 (RtlpMoveActCtxToFreeList.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax
  LONG v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    RefCount = ActivationContext->RefCount;
    do
    {
      v3 = RefCount - 1;
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) )
        break;
      RefCount = ActivationContext->RefCount;
      v3 = ActivationContext->RefCount;
    }
    while ( ActivationContext->RefCount != 0x7FFFFFFF );
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext(ActivationContext);
    }
  }
}
