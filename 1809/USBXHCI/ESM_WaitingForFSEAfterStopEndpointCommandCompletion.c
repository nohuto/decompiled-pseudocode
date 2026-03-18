/*
 * XREFs of ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C0040EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_WaitingForFSEAfterStopEndpointCommandCompletion(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx

  v1 = *(KSPIN_LOCK **)(a1 + 960);
  _m_prefetchw(v1 + 4);
  if ( (_InterlockedXor((volatile signed __int32 *)v1 + 8, 8u) & 8) != 0 )
    ESM_AddEvent(v1 + 36, 118);
  (*(void (__fastcall **)(unsigned __int64, KSPIN_LOCK, __int64))(WdfFunctions_01023 + 2552))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v1[162],
    -20000000LL);
  return 1000LL;
}
