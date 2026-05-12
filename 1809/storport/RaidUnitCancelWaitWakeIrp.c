/*
 * XREFs of RaidUnitCancelWaitWakeIrp @ 0x1C0012D2C
 * Callers:
 *     StorPortUnitPoFxD0Completion @ 0x1C0012C68 (StorPortUnitPoFxD0Completion.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001E400 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0044150 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall RaidUnitCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1744) + 64LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 64LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v2;
}
