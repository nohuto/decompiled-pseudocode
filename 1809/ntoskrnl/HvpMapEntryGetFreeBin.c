/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1405F9C1C
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1405A7B38 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1405A818C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1405A8240 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x1405F991C (HvCheckHive.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x1405FBD30 (HvpSetRangeProtection.c)
 *     HvpDropPagedBins @ 0x1407365B4 (HvpDropPagedBins.c)
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
