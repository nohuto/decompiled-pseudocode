/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x14084B9F0
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x1406B2870 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x1406975C0 (ExCreateHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AE7A0 (ExpRemoveHandleTable.c)
 */

unsigned __int64 __fastcall AlpcpAllocateMessageFromExtendedTables(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rsi
  _QWORD *v6; // rbx
  __int64 HandleTable; // rax
  __int64 Handle; // rax

  if ( !AlpcpSecondaryMessageTables )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x61486C41u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x100uLL);
    *v3 = AlpcMessageTable;
    if ( _InterlockedCompareExchange64(&AlpcpSecondaryMessageTables, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  v4 = 1;
  for ( i = 8LL; ; i += 8LL )
  {
    v6 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
    if ( !v6 )
    {
      HandleTable = ExCreateHandleTable(0LL, 0LL);
      v6 = (_QWORD *)HandleTable;
      if ( !HandleTable )
        return 0LL;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(AlpcpSecondaryMessageTables + 8LL * v4),
             HandleTable,
             0LL) )
      {
        ExpRemoveHandleTable(HandleTable);
        ExpFreeHandleTable(v6);
        v6 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
      }
    }
    Handle = ExCreateHandleEx((__int64)v6, a1, 0, 0, 0LL);
    if ( Handle )
      break;
    if ( ++v4 >= 0x20 )
      return 0LL;
  }
  return Handle | ((unsigned __int64)v4 << 26);
}
