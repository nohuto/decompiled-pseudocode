/*
 * XREFs of ndisFindReceiveQueueByQueueId @ 0x1C005F4B8
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00357F0 (NdisAllocateSharedMemory.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005F02C (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C005F4F0 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C005FED0 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C00604E0 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0060B00 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C0061628 (ndisUpdateRcvFilterQueueParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindReceiveQueueByQueueId(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 *i; // rax

  v2 = 0LL;
  for ( i = *(__int64 **)(a1 + 3464); i != (__int64 *)(a1 + 3464); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 12) == a2 )
      return i;
    if ( *((_DWORD *)i + 12) > a2 )
      return (__int64 *)v2;
  }
  return (__int64 *)v2;
}
