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

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  volatile signed __int32 v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    v2 = *a1;
    do
    {
      v3 = v2 - 1;
      if ( v2 == _InterlockedCompareExchange(a1, v2 - 1, v2) )
        break;
      v2 = *a1;
      v3 = *a1;
    }
    while ( *a1 != 0x7FFFFFFF );
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
