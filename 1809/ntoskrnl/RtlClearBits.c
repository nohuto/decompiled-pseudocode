/*
 * XREFs of RtlClearBits @ 0x140017890
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadAhead @ 0x140127608 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132688 (MiReduceMappedFileReadBehind.c)
 *     HvpGrowDirtyVectors @ 0x1401369E0 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156F48 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B8110 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1402EEC20 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1402EF780 (RtlShiftLeftBitMap.c)
 *     PopMirrorPhysicalMemory @ 0x14056D6C0 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x14057AEA8 (PnprMarkOrMirrorPages.c)
 *     MiProcessHotPatchUndoTable @ 0x1405832E8 (MiProcessHotPatchUndoTable.c)
 *     HvpAdjustBitmap @ 0x1405A6024 (HvpAdjustBitmap.c)
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     CmpCheckValueList @ 0x1405DA450 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405DCB00 (HvIsCellAllocated.c)
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
 *     MiObtainRelocationBits @ 0x140650C9C (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x14074DD10 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140858A9C (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiCreateSessionDriverProtos @ 0x14086037C (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1408B0740 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14092E788 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409D3CE0 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1409D4794 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
      v7 = ~(byte_1403630E8[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_1403630E8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140361CC8[v6];
      goto LABEL_4;
    }
  }
}
