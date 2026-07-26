/*
 * XREFs of ndisClearReceiveFilter @ 0x1C005F1C8
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C005F4A0 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C005F800 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005EA6C (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EE28 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F0B4 (WPP_RECORDER_SF_ql_ea_1C005F0B4.c)
 */

__int64 __fastcall ndisClearReceiveFilter(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  unsigned int *v6; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // r14
  KIRQL v9; // r10
  int v10; // edx

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x19u,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)a1,
      a2);
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2, v5, v6);
  a1->MiniportThread = 0LL;
  v8 = ReceiveFilterByFilterId;
  KeReleaseSpinLock(&a1->Lock, v9);
  if ( v8 )
    ndisDereferenceReceiveFilter(v8);
  else
    v4 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0x19u,
      0x1Au,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)a1,
      a2,
      v4);
  return v4;
}
