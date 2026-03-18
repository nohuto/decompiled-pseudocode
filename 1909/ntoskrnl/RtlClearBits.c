/*
 * XREFs of RtlClearBits @ 0x1400CF210
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x140089DE8 (MiTrimWorkingSetBuildup.c)
 *     HvpGrowDirtyVectors @ 0x1400EC9E8 (HvpGrowDirtyVectors.c)
 *     MiReduceMappedFileReadAhead @ 0x140129808 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132E50 (MiReduceMappedFileReadBehind.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140158F04 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402CE0FC (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x14030CCB0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x14030DBA0 (RtlShiftLeftBitMap.c)
 *     PopMirrorPhysicalMemory @ 0x14059BC80 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1405A9CB8 (PnprMarkOrMirrorPages.c)
 *     PspQueryRateControlHistory @ 0x140616FFC (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x140632250 (HvpRemoveFreeCellHint.c)
 *     HvFreeHivePartial @ 0x14064194C (HvFreeHivePartial.c)
 *     CmpCheckValueList @ 0x140663E70 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x140664D20 (HvIsCellAllocated.c)
 *     HvpAdjustBitmap @ 0x14068DDE4 (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x140746F3C (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408909FC (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140890A60 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x14089B424 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1408EBE34 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14096BFF8 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409F0830 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A17E24 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
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
      v7 = ~(byte_140382448[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140382448[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140381050[v6];
      goto LABEL_4;
    }
  }
}
