/*
 * XREFs of HUBMUX_QueueStopToAllPSMs @ 0x1C000DB4C
 * Callers:
 *     HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007A80 (HUBHSM_NotifyingHubStopToPortsOnReset.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C0007AA0 (HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopToAllPSMs(__int64 a1)
{
  int v2; // esi
  __int64 i; // rbx
  __int64 v4; // rbx

  if ( !*(_DWORD *)(a1 + 2356) )
    goto LABEL_8;
  v2 = *(_DWORD *)(a1 + 2344);
  *(_DWORD *)(a1 + 2332) = v2;
  for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    if ( a1 == v4 - 2112 )
      break;
    if ( (*(_DWORD *)(v4 + 264) & 8) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v4 + 264), 4u);
    (*(void (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3034LL);
  }
  if ( !v2 )
LABEL_8:
    HUBSM_AddEvent(a1 + 1264, 2058);
}
