/*
 * XREFs of ExpAllocateHandleTable @ 0x140697C24
 * Callers:
 *     ExCreateHandleTable @ 0x1406975C0 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140697740 (ExDupHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x140697DF8 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x140697F28 (ExpAllocateLowLevelTable.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140697FC0 (PsChargeProcessPagedPoolQuota.c)
 */

_QWORD *__fastcall ExpAllocateHandleTable(struct _KPROCESS *a1, char a2)
{
  SIZE_T v4; // rsi
  _QWORD *PoolWithTag; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 LowLevelTable; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *result; // rax

  v4 = (unsigned int)((ExpFreeListCount + 1) << 6);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v4, 0x6274624Fu);
  if ( !PoolWithTag )
    return 0LL;
  if ( a1 && (int)PsChargeProcessPagedPoolQuota(a1, 128LL) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  memset(PoolWithTag, 0, v4);
  PoolWithTag[2] = a1;
  v6 = (unsigned int)ExpFreeListCount;
  *((_DWORD *)PoolWithTag + 10) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  if ( (_DWORD)v6 )
  {
    v7 = PoolWithTag + 8;
    do
    {
      *v7 = 0LL;
      v7 += 8;
      --v6;
    }
    while ( v6 );
  }
  LowLevelTable = ExpAllocateLowLevelTable(PoolWithTag, 0LL);
  v10 = LowLevelTable;
  if ( !LowLevelTable )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    if ( a1 )
      PsReturnProcessPagedPoolQuota(a1, 128LL);
    return 0LL;
  }
  LOBYTE(v9) = a2;
  ExpInsertLowLevelTableIntoFreeList(PoolWithTag, LowLevelTable, PoolWithTag + 8, v9);
  PoolWithTag[1] = v10;
  if ( a1 )
    *((_BYTE *)PoolWithTag + 44) |= 0x10u;
  PoolWithTag[7] = 0LL;
  result = PoolWithTag;
  PoolWithTag[6] = 0LL;
  return result;
}
