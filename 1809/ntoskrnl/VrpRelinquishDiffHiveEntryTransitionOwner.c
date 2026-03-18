/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080DC9C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080D918 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCDC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWakeWaitChain @ 0x140125BB8 (KeWakeWaitChain.c)
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
