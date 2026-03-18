/*
 * XREFs of HvpGetCellMap @ 0x1405D5C00
 * Callers:
 *     HvpAddFreeCellHint @ 0x1405D5330 (HvpAddFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x1405D5AB8 (HvpEnlistFreeCell.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 *     HvpRemoveFreeCellHint @ 0x140632250 (HvpRemoveFreeCellHint.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14063277C (HvpFindFreeCell.c)
 *     HvpSetRangeProtection @ 0x1406329F4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x1406331C4 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140641898 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14064194C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14068D388 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068D968 (HvpRemapAndEnlistHiveBins.c)
 *     HvpPointMapEntriesToBuffer @ 0x14068DBDC (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x14068E0AC (HvpMapHiveImageFromViewMap.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068EF6C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvTrimHive @ 0x140716A10 (HvTrimHive.c)
 *     HvpDropPagedBins @ 0x14075C4B4 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x1408303C8 (HvpCopyModifiedData.c)
 *     HvWriteExternal @ 0x140833788 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14083EB48 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x14083EE50 (HvpShrinkMap.c)
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
