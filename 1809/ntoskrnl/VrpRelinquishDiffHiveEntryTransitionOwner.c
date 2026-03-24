/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080DC7C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080D8F8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWakeWaitChain @ 0x140125BD8 (KeWakeWaitChain.c)
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
