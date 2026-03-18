/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406475F8
 * Callers:
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140091B00 (CcAsyncReadPrefetch.c)
 *     CcFetchDataForRead @ 0x1400B5B10 (CcFetchDataForRead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCcAccessLog @ 0x1400901DC (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x14064698C (MiGetCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x140647BD8 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140647D64 (MiPfExecuteReadList.c)
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
  PVOID CcAccessLog; // rdi
  __int64 v11; // r15
  int v12; // r8d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CcAccessLog = 0LL;
  v11 = **(_QWORD **)(a1 + 40);
  if ( dword_140466068 && a5 >= dword_14046606C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((__int64)CcAccessLog, v11, a2) >= 0 && a3 )
  {
    a3[26] = 1;
    if ( !*a8 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)a3, 0LL, v12) >= 0 && *((_DWORD **)a3 + 15) != a3 + 30 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog((signed __int64)CcAccessLog, 1);
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
    MiReturnCcAccessLog((signed __int64)CcAccessLog, 0);
  return 0LL;
}
