/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1406321D4
 * Callers:
 *     CmpFree @ 0x140631B00 (CmpFree.c)
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14064194C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14068D388 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068D968 (HvpRemapAndEnlistHiveBins.c)
 *     CmpAllocate @ 0x14068EE80 (CmpAllocate.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     HvpDropPagedBins @ 0x14075C4B4 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
