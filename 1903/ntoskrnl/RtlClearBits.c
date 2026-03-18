/*
 * XREFs of RtlClearBits @ 0x140091EF0
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x140088AE8 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadAhead @ 0x140128DE8 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132360 (MiReduceMappedFileReadBehind.c)
 *     HvpGrowDirtyVectors @ 0x1401372A4 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140158864 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD8B0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402CE39C (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x14030D260 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x14030E150 (RtlShiftLeftBitMap.c)
 *     PopMirrorPhysicalMemory @ 0x14059C400 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1405A9CD8 (PnprMarkOrMirrorPages.c)
 *     PspQueryRateControlHistory @ 0x1406154EC (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x14061E218 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x14062E3D0 (HvpRemoveFreeCellHint.c)
 *     CmpCheckValueList @ 0x140650CB0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x140651B60 (HvIsCellAllocated.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x14065FDC4 (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14074503C (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407711D8 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408911DC (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140891240 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x14089BC04 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1408EC52C (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14096BFF8 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409F0920 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A17964 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_1403821E8[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_1403821E8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140380E20[v6];
      goto LABEL_4;
    }
  }
}
