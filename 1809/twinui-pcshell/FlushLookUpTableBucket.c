/*
 * XREFs of FlushLookUpTableBucket @ 0x1800E3C5C
 * Callers:
 *     LookUpTableFlushComplete @ 0x1800E4018 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1800E4214 (LookUpTableFlushPartial.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x1800E3B7C (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x1800E3BC4 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v5; // rdi
  const EVENT_DESCRIPTOR *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // ebx

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 264);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 264));
  v6 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v7 = FlattenEventEntryTree((__int64)v6);
  *(_DWORD *)(a1 + 256) -= v7;
  v8 = v7;
  ReleaseSRWLockExclusive(v5);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 32LL), v6);
  return v8;
}
