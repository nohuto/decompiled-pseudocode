/*
 * XREFs of RtlReleaseActivationContext @ 0x18002D7A0
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpFindDllActivationContext @ 0x1800222F0 (LdrpFindDllActivationContext.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     RtlDispatchAPC @ 0x180030DC0 (RtlDispatchAPC.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     RtlFreeActivationContextStack @ 0x180076610 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x1800766F0 (RtlDeactivateActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180003790 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180086CCC (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E0D48 (RtlpMoveActCtxToFreeList.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    for ( i = *a1; i != 0x7FFFFFFF; i = *a1 )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(a1, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
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
