/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406637F8
 * Callers:
 *     CcFetchDataForRead @ 0x1400AF650 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1400DFB4C (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x1400DFAEC (MiReturnCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x14066395C (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 *     MiGetCcAccessLog @ 0x140663C28 (MiGetCcAccessLog.c)
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
  if ( dword_14043B9A8 && a5 >= dword_14043B9AC )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v11, a2) >= 0 && a3 )
  {
    a3[20] = 1;
    if ( !*a8 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)a3, 0LL, v12) >= 0 && *((_DWORD **)a3 + 12) != a3 + 24 )
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
