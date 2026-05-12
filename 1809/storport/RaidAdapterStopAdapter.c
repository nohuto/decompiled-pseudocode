/*
 * XREFs of RaidAdapterStopAdapter @ 0x1C0016CB0
 * Callers:
 *     RaidAdapterStop @ 0x1C0016C60 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 312, 1LL, 0LL);
  RaidAdapterReleaseInterruptLock(a1, v2);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 3LL) )
    RaCallMiniportAdapterControl(a1 + 312, 3LL, 0LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}
