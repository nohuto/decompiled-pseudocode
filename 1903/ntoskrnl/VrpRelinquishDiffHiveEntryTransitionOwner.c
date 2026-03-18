/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1408474E4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1408471BC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
