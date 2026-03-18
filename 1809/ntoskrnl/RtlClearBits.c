/*
 * XREFs of RtlClearBits @ 0x140017890
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x14011C6F8 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadAhead @ 0x140127518 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132598 (MiReduceMappedFileReadBehind.c)
 *     HvpGrowDirtyVectors @ 0x1401368C0 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156E28 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7360 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B7E20 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1402EE930 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1402EF490 (RtlShiftLeftBitMap.c)
 *     PopMirrorPhysicalMemory @ 0x14056C6C0 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x140579EA8 (PnprMarkOrMirrorPages.c)
 *     MiProcessHotPatchUndoTable @ 0x1405822E8 (MiProcessHotPatchUndoTable.c)
 *     HvpAdjustBitmap @ 0x1405A5024 (HvpAdjustBitmap.c)
 *     PspQueryRateControlHistory @ 0x1405A7F5C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x1405A8240 (HvFreeHivePartial.c)
 *     CmpCheckValueList @ 0x1405D9450 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405DBB00 (HvIsCellAllocated.c)
 *     MiReturnImageBase @ 0x1405F0514 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x1405F2A10 (MiCopyToCfgBitMap.c)
 *     HvpRemoveFreeCellHint @ 0x1405FBB90 (HvpRemoveFreeCellHint.c)
 *     MiObtainRelocationBits @ 0x14064FAFC (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C260 (SepGetLowBoxNumberEntry.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14070E05C (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x14074CB40 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x14085785C (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiCreateSessionDriverProtos @ 0x14085F13C (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1408AF500 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14092D788 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409D2CE0 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1409D3794 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
      v7 = ~(byte_140362048[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140362048[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140360C28[v6];
      goto LABEL_4;
    }
  }
}
