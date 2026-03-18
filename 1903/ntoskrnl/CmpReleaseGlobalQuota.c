/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14062E354
 * Callers:
 *     CmpFree @ 0x14062DC80 (CmpFree.c)
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 *     CmpAllocate @ 0x14065EE10 (CmpAllocate.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
