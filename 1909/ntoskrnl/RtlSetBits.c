/*
 * XREFs of RtlSetBits @ 0x1400076F0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002E2E0 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x140085750 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x1400DC1D4 (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x140128B0C (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140129808 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132E50 (MiReduceMappedFileReadBehind.c)
 *     MiSetPageFileAllocationBits @ 0x14014DB20 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140158F04 (MiStoreSetPageFileRunEvicted.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1402CDBA8 (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x14059B358 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14059B398 (PopDiscardRange.c)
 *     PopCloneRange @ 0x14059B3B0 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x14059B840 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1405A9E1C (PnprMirrorMarkedPages.c)
 *     HvpAddFreeCellHint @ 0x1405D5330 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x1405D53E0 (HvCheckBin.c)
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x140632250 (HvpRemoveFreeCellHint.c)
 *     MiLockdownSections @ 0x14071211C (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x1407122A8 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     HvpUpdateRecoveryVector @ 0x140840008 (HvpUpdateRecoveryVector.c)
 *     ViAllocateContiguousMemory @ 0x14096AE00 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1409F09EC (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A16C18 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
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
      v7 = byte_140382448[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140381050[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140382448[v6];
      goto LABEL_4;
    }
  }
}
