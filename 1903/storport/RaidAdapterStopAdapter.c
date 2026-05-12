/*
 * XREFs of RaidAdapterStopAdapter @ 0x1C0015BD8
 * Callers:
 *     RaidAdapterStop @ 0x1C0015CE0 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
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
