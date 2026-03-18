/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14062EAA8
 * Callers:
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     HvCheckHive @ 0x14062E570 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x14062EB74 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14062F344 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14065DB20 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
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
