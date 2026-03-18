/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x140632928
 * Callers:
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x1406329F4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x1406331C4 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140641898 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14064194C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x14075C4B4 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
