/*
 * XREFs of HvpGetCellMap @ 0x1405FB04C
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A3F90 (HvpPointMapEntriesToBuffer.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A73BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1405A7B38 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1405A818C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405A8240 (HvFreeHivePartial.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405F96A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x1405F991C (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x1405F9A70 (HvpFindFreeCell.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405F9C30 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x1405F9D2C (HvpAddFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x1405FAC04 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x1405FAF0C (HvpEnlistFreeCell.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 *     HvpRemoveFreeCellHint @ 0x1405FBB90 (HvpRemoveFreeCellHint.c)
 *     HvpSetRangeProtection @ 0x1405FBD30 (HvpSetRangeProtection.c)
 *     HvTrimHive @ 0x1406BDD40 (HvTrimHive.c)
 *     HvpDropPagedBins @ 0x1407365B4 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x1407F78C8 (HvpCopyModifiedData.c)
 *     HvWriteExternal @ 0x1407FAD94 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140805D00 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140806020 (HvpShrinkMap.c)
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
