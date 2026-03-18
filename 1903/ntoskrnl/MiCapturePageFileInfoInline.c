/*
 * XREFs of MiCapturePageFileInfoInline @ 0x14011B568
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140028CD0 (MiDeleteBatch.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageTablePage @ 0x140090030 (MiLockPageTablePage.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400E3B98 (MiReleaseWsSwapReservationPfn.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140157C10 (MiStoreMarkLockedPagesModified.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
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
