/*
 * XREFs of HvpGetCellMap @ 0x1405FC04C
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1405A918C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x1405FA91C (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x1405FAA70 (HvpFindFreeCell.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405FAC30 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x1405FAD2C (HvpAddFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x1405FBF0C (HvpEnlistFreeCell.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     HvpRemoveFreeCellHint @ 0x1405FCB90 (HvpRemoveFreeCellHint.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 *     HvTrimHive @ 0x1406BEFC0 (HvTrimHive.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x1407F8AA8 (HvpCopyModifiedData.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140806EE0 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140807200 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rax

  v2 = a2 >> 31;
  v3 = (_DWORD)v2 << 31;
  v4 = 632 * v2;
  if ( a2 + v3 >= *(_DWORD *)(v4 + a1 + 272) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v4 + a1 + 280) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
