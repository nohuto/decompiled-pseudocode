/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080EE7C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0, 0LL);
  KeAbPostRelease(v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
