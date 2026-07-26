/*
 * XREFs of ndisClearReceiveFiltersForProtocol @ 0x1C0113BB0
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C0093804 (ndisCleanUpForProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005EC40 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005EF64 (-ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisClearReceiveFiltersForProtocol(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  struct _NDIS_OPEN_BLOCK *v2; // rsi
  int v3; // edi
  unsigned int NumReceiveFilters; // r14d
  struct _NDIS_RECEIVE_FILTER_BLOCK *result; // rax
  struct _NDIS_RECEIVE_FILTER_BLOCK *v6; // rbx
  __int64 v7; // [rsp+38h] [rbp-10h]

  MiniportHandle = a1->MiniportHandle;
  v2 = a1;
  v3 = 0;
  NumReceiveFilters = MiniportHandle->NumReceiveFilters;
  while ( 1 )
  {
    result = ndisFindFirstReceiveFilterByOpen(a1);
    v6 = result;
    if ( !result )
      break;
    if ( ++v3 > NumReceiveFilters )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = result->FilterId;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Bu,
        (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
        (char)v2,
        (char)MiniportHandle,
        v7);
    }
    ndisDereferenceReceiveFilter(v6);
    a1 = v2;
  }
  return result;
}
