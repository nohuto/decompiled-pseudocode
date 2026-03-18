/*
 * XREFs of HvpGetCellMap @ 0x1405D5440
 * Callers:
 *     HvpAddFreeCellHint @ 0x1405D4B70 (HvpAddFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x1405D52F8 (HvpEnlistFreeCell.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     HvpRemoveFreeCellHint @ 0x14062E3D0 (HvpRemoveFreeCellHint.c)
 *     HvCheckHive @ 0x14062E570 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14062E8FC (HvpFindFreeCell.c)
 *     HvpSetRangeProtection @ 0x14062EB74 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14062F344 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14065DB20 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpMapHiveImageFromViewMap @ 0x14065EF78 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpPointMapEntriesToBuffer @ 0x14065FBBC (HvpPointMapEntriesToBuffer.c)
 *     HvTrimHive @ 0x140714C30 (HvTrimHive.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x140830558 (HvpCopyModifiedData.c)
 *     HvWriteExternal @ 0x140834128 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140840648 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140840950 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 272) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 280) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
