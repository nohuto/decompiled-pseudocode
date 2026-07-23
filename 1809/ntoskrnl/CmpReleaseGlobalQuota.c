/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1405FC668
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     CmpAllocate @ 0x1405A82D0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1405A9240 (HvFreeHivePartial.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     CmpFree @ 0x1405FE200 (CmpFree.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
