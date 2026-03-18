/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140119DB0
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteValidSystemPage @ 0x14007A860 (MiDeleteValidSystemPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x1400823A4 (MiReleasePageFileSpace.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087910 (MiCaptureDirtyBitToPfn.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiWsleFree @ 0x1400B2C50 (MiWsleFree.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14013D890 (MiReleaseWsSwapReservationPfn.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140153EB0 (MiStoreMarkLockedPagesModified.c)
 *     MiPurgeImageSection @ 0x140176600 (MiPurgeImageSection.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
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
