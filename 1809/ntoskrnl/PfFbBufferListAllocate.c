/*
 * XREFs of PfFbBufferListAllocate @ 0x14018C190
 * Callers:
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400E2700 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  char *PoolWithTag; // rax
  char *v8; // rsi
  char *v9; // r15
  _SLIST_ENTRY *v10; // rbx
  __int64 result; // rax

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, a2) > SHIDWORD(RunRef[5].Next) )
  {
    result = 3221225773LL;
LABEL_9:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -(int)v3);
    return result;
  }
  v6 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2), a2, HIDWORD(RunRef[4].Next));
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_9;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  *((_DWORD *)v8 + 4) = a3;
  v9 = &v8[v3];
  *((_DWORD *)v8 + 6) = v3;
  v10 = (_SLIST_ENTRY *)(v8 + 32);
  *((_DWORD *)v8 + 5) = v6;
  while ( (char *)v10 + v6 <= v9 )
  {
    PfFbBufferListInsertInFree(RunRef, v10, v6, 0, 0);
    v10 = (_SLIST_ENTRY *)((char *)v10 + (unsigned int)v6);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], (PSLIST_ENTRY)v8);
  return 0LL;
}
