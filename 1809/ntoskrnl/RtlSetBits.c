/*
 * XREFs of RtlSetBits @ 0x140076D70
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x1401252E4 (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140127608 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132688 (MiReduceMappedFileReadBehind.c)
 *     MiSetPageFileAllocationBits @ 0x140150938 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156F48 (MiStoreSetPageFileRunEvicted.c)
 *     MiAssignSharedUserRanges @ 0x140187A90 (MiAssignSharedUserRanges.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1402B7BC0 (MiExtendPagingFileMaximum.c)
 *     PopDiscardRange @ 0x14056CA08 (PopDiscardRange.c)
 *     PopSetBootPhaseRange @ 0x14056CA20 (PopSetBootPhaseRange.c)
 *     PopCloneRange @ 0x14056CA60 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x14056CCDC (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x14057AFFC (PnprMirrorMarkedPages.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     HvCheckBin @ 0x1405F3100 (HvCheckBin.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     HvpAddFreeCellHint @ 0x1405FAD2C (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x140650C9C (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     MiLockdownSections @ 0x140683DA4 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140683F30 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     HvpUpdateRecoveryVector @ 0x1408083A0 (HvpUpdateRecoveryVector.c)
 *     MiSetVadBits @ 0x140859D74 (MiSetVadBits.c)
 *     ViAllocateContiguousMemory @ 0x14092D590 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1409D3E8C (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
      v7 = byte_1403630E8[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140361CC8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1403630E8[v6];
      goto LABEL_4;
    }
  }
}
