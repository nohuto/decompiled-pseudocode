/*
 * XREFs of MiDiscardTransitionPte @ 0x14015827C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyPfn @ 0x140120484 (MiUnlinkStandbyPfn.c)
 *     MiConvertStandbyToProto @ 0x14013EA30 (MiConvertStandbyToProto.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140152374 (MiMirrorPerformBrownWrites.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x1402A5360 (MiWalkResetCommitPte.c)
 *     MiMakeImagePageOk @ 0x1402C44FC (MiMakeImagePageOk.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x140065CB0 (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiDiscardTransitionPte(ULONG_PTR a1)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
}
