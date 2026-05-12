/*
 * XREFs of RaidAdapterStopAdapter @ 0x1C0015BA4
 * Callers:
 *     RaidAdapterStop @ 0x1C0015CAC (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 296);
  RaidAdapterReleaseInterruptLock(a1, v2);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 3) )
    RaCallMiniportAdapterControl(a1 + 296);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}
