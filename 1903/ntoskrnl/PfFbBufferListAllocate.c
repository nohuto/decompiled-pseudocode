/*
 * XREFs of PfFbBufferListAllocate @ 0x140195E70
 * Callers:
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140098178 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v8; // rsi
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
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(
                                  (POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2),
                                  a2,
                                  HIDWORD(RunRef[4].Next));
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_9;
  }
  PoolWithTag->Next = 0LL;
  *((_QWORD *)&PoolWithTag->Next + 1) = 0LL;
  *((_DWORD *)&PoolWithTag[1].Next + 3) = 0;
  LODWORD(PoolWithTag[1].Next) = a3;
  v9 = (char *)PoolWithTag + v3;
  *((_DWORD *)&PoolWithTag[1].Next + 2) = v3;
  v10 = PoolWithTag + 2;
  HIDWORD(PoolWithTag[1].Next) = v6;
  while ( (char *)v10 + v6 <= v9 )
  {
    PfFbBufferListInsertInFree(RunRef, v10, v6, 0, 0);
    v10 = (_SLIST_ENTRY *)((char *)v10 + (unsigned int)v6);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], v8);
  return 0LL;
}
