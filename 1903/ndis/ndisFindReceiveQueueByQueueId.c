/*
 * XREFs of ndisFindReceiveQueueByQueueId @ 0x1C005F2E4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C0035800 (NdisAllocateSharedMemory.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005EE58 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C005F320 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C005FD00 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C0060310 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0060930 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C0061458 (ndisUpdateRcvFilterQueueParameters.c)
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
