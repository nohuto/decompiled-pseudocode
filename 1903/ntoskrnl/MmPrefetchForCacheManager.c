/*
 * XREFs of MmPrefetchForCacheManager @ 0x14066DB98
 * Callers:
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1400A26FC (CcAsyncReadPrefetch.c)
 *     CcFetchDataForRead @ 0x1400D5C90 (CcFetchDataForRead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x1401132A4 (MiReturnCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14066E178 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14066E304 (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x1406BD07C (MiGetCcAccessLog.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 CcAccessLog; // rdi
  __int64 v11; // r15
  int v12; // r8d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CcAccessLog = 0LL;
  v11 = **(_QWORD **)(a1 + 40);
  if ( dword_140466368 && a5 >= dword_14046636C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v11, a2) >= 0 && a3 )
  {
    a3[26] = 1;
    if ( !*a8 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)a3, 0LL, v12) >= 0 && *((_DWORD **)a3 + 15) != a3 + 30 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog(CcAccessLog, 1);
      MiPfExecuteReadList(a3, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)a3 = *a8;
      *a8 = a3;
      return result;
    }
    if ( !*a8 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReleaseReadListResources(a3);
    ExFreePoolWithTag(a3, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
