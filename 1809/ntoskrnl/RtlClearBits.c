/*
 * XREFs of RtlClearBits @ 0x140017890
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x14011C718 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadAhead @ 0x140127538 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x1401325B8 (MiReduceMappedFileReadBehind.c)
 *     HvpGrowDirtyVectors @ 0x1401368E0 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x14014CBA0 (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156E48 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7460 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B7F20 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1402EEA30 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1402EF590 (RtlShiftLeftBitMap.c)
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
 *     MiObtainRelocationBits @ 0x14064FADC (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C240 (SepGetLowBoxNumberEntry.c)
 *     MiFreeInitializationCode @ 0x1406C781C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14070E03C (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x14074CB20 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x14085783C (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiCreateSessionDriverProtos @ 0x14085F11C (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1408AF4E0 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14092D788 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409D2CE0 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1409D3794 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
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
      v7 = ~(byte_140362158[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140362158[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140360D38[v6];
      goto LABEL_4;
    }
  }
}
