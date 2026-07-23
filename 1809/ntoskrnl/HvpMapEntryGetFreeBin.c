/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1405FAC1C
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1405A918C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x1405FA91C (HvCheckHive.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
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
