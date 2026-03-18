/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1405FB668
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     CmpAllocate @ 0x1405A72D0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1405A8240 (HvFreeHivePartial.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405F96A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 *     CmpFree @ 0x1405FD200 (CmpFree.c)
 *     HvpDropPagedBins @ 0x1407365B4 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
