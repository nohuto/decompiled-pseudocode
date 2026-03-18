/*
 * XREFs of RtlSetBits @ 0x140076D80
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x1400D95C0 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14012411C (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x1401251F4 (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140127518 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132598 (MiReduceMappedFileReadBehind.c)
 *     MiSetPageFileAllocationBits @ 0x140150818 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156E28 (MiStoreSetPageFileRunEvicted.c)
 *     MiAssignSharedUserRanges @ 0x140187930 (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7360 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1402B78D0 (MiExtendPagingFileMaximum.c)
 *     PopDiscardRange @ 0x14056BA08 (PopDiscardRange.c)
 *     PopSetBootPhaseRange @ 0x14056BA20 (PopSetBootPhaseRange.c)
 *     PopCloneRange @ 0x14056BA60 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x14056BCDC (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x140579FFC (PnprMirrorMarkedPages.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x1405F2100 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x1405F2A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     HvpAddFreeCellHint @ 0x1405F9D2C (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x1405FAD2C (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x1405FBB90 (HvpRemoveFreeCellHint.c)
 *     SepAddLuidToIndexEntry @ 0x14064EFCC (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14064FAFC (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C260 (SepGetLowBoxNumberEntry.c)
 *     MiLockdownSections @ 0x140682C04 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140682D90 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     HvpUpdateRecoveryVector @ 0x1408071C0 (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x140858B34 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x14092C590 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1409D2E8C (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_140362048[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140360C28[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140362048[v6];
      goto LABEL_4;
    }
  }
}
