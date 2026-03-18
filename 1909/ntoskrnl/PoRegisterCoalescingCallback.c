/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140758F80
 * Callers:
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     PopCoalescingInitialize @ 0x1409FBB04 (PopCoalescingInitialize.c)
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(
        unsigned __int64 a1,
        char a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned __int64 a4)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  struct _EX_RUNDOWN_REF **v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // rax
  __int64 result; // rax

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x62436F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v9[2].Count = (unsigned __int64)v9;
  v9[1].Count = (unsigned __int64)PopCoalescingCallback;
  v9[5].Count = a4;
  v9[3].Count = a1;
  LOBYTE(v9[4].Count) = a2 != 0;
  ExInitializePushLock(&v9->Count);
  if ( !ExCompareExchangeCallBack((signed __int64 *)&v9[8], v9, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
  v10 = (struct _EX_RUNDOWN_REF **)off_140426F88[0];
  v11 = v9 + 6;
  if ( *(_UNKNOWN ***)off_140426F88[0] != &PopCoalRegistrationList )
    __fastfail(3u);
  v9[7].Count = (unsigned __int64)off_140426F88[0];
  v11->Count = (unsigned __int64)&PopCoalRegistrationList;
  *v10 = v11;
  off_140426F88[0] = (_UNKNOWN **)&v9[6];
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = v9;
  return result;
}
