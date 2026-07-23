/*
 * XREFs of ViGrowPoolAllocation @ 0x140926A34
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     KeZeroSinglePage @ 0x1401C0A50 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  _SLIST_ENTRY *v3; // rbx
  _SLIST_HEADER *v5; // rsi
  __int64 v6; // rdi

  PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                          (POOL_TYPE)640,
                                          0x1000uLL,
                                          0x70706556u,
                                          HighPoolPriority);
  v3 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return RtlpInterlockedPopEntrySList(a1 + 5);
  KeZeroSinglePage(PoolWithTagPriority);
  *((_QWORD *)&v3->Next + 1) = a1;
  v3[1].Next = (_SLIST_ENTRY *)556929861;
  RtlpInterlockedPushEntrySList(a1 + 4, v3);
  v5 = a1 + 5;
  v6 = 126LL;
  do
  {
    v3 += 2;
    v3[1].Next = (_SLIST_ENTRY *)1;
    RtlpInterlockedPushEntrySList(v5, v3);
    --v6;
  }
  while ( v6 );
  v3[3].Next = (_SLIST_ENTRY *)1;
  return v3 + 2;
}
