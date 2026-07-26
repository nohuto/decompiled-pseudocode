/*
 * XREFs of ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EE28
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C005F1C8 (ndisClearReceiveFilter.c)
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C005F650 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C005F800 (ndisOidPostRcvFilterSetFilter.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C005FBD0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0060580 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C0060750 (ndisOidPreRcvFilterParameters.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindReceiveFilterByFilterId(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *i; // rax

  v4 = 0LL;
  for ( i = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveFilterList.Flink;
        i != (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveFilterList;
        i = *(struct _NDIS_MINIPORT_BLOCK **)&i->Header.Type )
  {
    if ( i->PcwDatapathEventMask == a2 )
      return i;
    if ( i->PcwDatapathEventMask > a2 )
      return (struct _NDIS_MINIPORT_BLOCK *)v4;
  }
  return (struct _NDIS_MINIPORT_BLOCK *)v4;
}
