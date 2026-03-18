/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1400261D0
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x14015FB5C (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     MiFreeLargePageSubPageAsSmall @ 0x1402DF7B4 (MiFreeLargePageSubPageAsSmall.c)
 *     MiSwapHardFaultPage @ 0x1402EC2A0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  char v6; // al

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v6 = *(_BYTE *)(a1 + 35);
    if ( (v6 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v6 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    return MiInsertPageInFreeOrZeroedList(a2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -9LL;
    if ( (v3 & 0x400) != 0 )
      v4 = -2049LL;
    *(_QWORD *)(a1 + 16) = v3 & v4;
    return MiInsertPageInList(a1);
  }
}
