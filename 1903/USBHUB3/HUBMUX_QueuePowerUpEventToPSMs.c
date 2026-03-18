/*
 * XREFs of HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000EB54
 * Callers:
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x1C0008A80 (HUBHSM_WaitingForPortsToAcquireReferenceOnResume.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x1C0008AB0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C0008AE0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0008B40 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v2; // rbx
  KIRQL v5; // al
  int v6; // eax
  __int64 v7; // rbx

  v2 = (KSPIN_LOCK *)(a1 + 2320);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2352), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2352), 0xFFFFFFFD);
  KeReleaseSpinLock(v2, v5);
  v6 = *(_DWORD *)(a1 + 2356);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 2332) = v6;
    v7 = *(_QWORD *)(a1 + 2360) - 248LL;
    if ( a1 != *(_QWORD *)(a1 + 2360) - 2360LL )
    {
      do
      {
        _InterlockedOr((volatile signed __int32 *)(v7 + 264), 4u);
        (*(void (__fastcall **)(__int64, _QWORD))(v7 + 1240))(v7, a2);
        v7 = *(_QWORD *)(v7 + 248) - 248LL;
      }
      while ( a1 != v7 - 2112 );
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1264, 2054);
  }
}
