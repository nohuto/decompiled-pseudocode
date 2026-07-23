/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140749550
 * Callers:
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x1409D2E34 (PopCoalescingInitialize.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     ExCompareExchangeCallBack @ 0x1401867BC (ExCompareExchangeCallBack.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
  v10 = (struct _EX_RUNDOWN_REF **)off_140401C48[0];
  v11 = v9 + 6;
  if ( *(_UNKNOWN ***)off_140401C48[0] != &PopCoalRegistrationList )
    __fastfail(3u);
  v9[7].Count = (unsigned __int64)off_140401C48[0];
  v11->Count = (unsigned __int64)&PopCoalRegistrationList;
  *v10 = v11;
  off_140401C48[0] = (_UNKNOWN **)&v9[6];
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = v9;
  return result;
}
