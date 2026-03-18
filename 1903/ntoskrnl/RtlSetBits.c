/*
 * XREFs of RtlSetBits @ 0x140007660
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x1400F0E24 (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x1401280EC (MiGetPrototypePteRanges.c)
 *     MiReduceMappedFileReadAhead @ 0x140128DE8 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132360 (MiReduceMappedFileReadBehind.c)
 *     MiSetPageFileAllocationBits @ 0x14014D480 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140158864 (MiStoreSetPageFileRunEvicted.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD8B0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1402CDE48 (MiExtendPagingFileMaximum.c)
 *     PopSetBootPhaseRange @ 0x14059B378 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x14059B3B8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x14059B3D0 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x14059B860 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1405A9E3C (PnprMirrorMarkedPages.c)
 *     HvpAddFreeCellHint @ 0x1405D4B70 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x1405D4C20 (HvCheckBin.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     SepAddLuidToIndexEntry @ 0x14061957C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061E218 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x14062E3D0 (HvpRemoveFreeCellHint.c)
 *     MiLockdownSections @ 0x14071033C (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x1407104C8 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     HvpUpdateRecoveryVector @ 0x1408405D4 (HvpUpdateRecoveryVector.c)
 *     ViAllocateContiguousMemory @ 0x14096AE00 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x1409F0ADC (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A16750 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
      v7 = byte_1403821E8[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140380E20[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1403821E8[v6];
      goto LABEL_4;
    }
  }
}
