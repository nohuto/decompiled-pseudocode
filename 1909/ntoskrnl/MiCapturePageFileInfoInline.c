/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140119998
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024940 (MiDeleteValidSystemPage.c)
 *     MiUnlockMdlWritePages @ 0x140024D30 (MiUnlockMdlWritePages.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1400290C0 (MiDeleteBatch.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14008FE18 (MiReleaseWsSwapReservationPfn.c)
 *     MiOutSwapWorkingSetPte @ 0x1400A5050 (MiOutSwapWorkingSetPte.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteCompletePfn @ 0x1400BDF90 (MiWriteCompletePfn.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1401582B0 (MiStoreMarkLockedPagesModified.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // r10
  int v7; // r11d

  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    if ( a2 )
      *v6 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v7 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (*a1 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
