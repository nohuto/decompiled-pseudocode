/*
 * XREFs of ndisClearReceiveFilter @ 0x1C003AFA4
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C003B7E0 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C003BB40 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003B1EC (ndisDereferenceReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003B534 (ndisFindReceiveFilterByFilterId.c)
 */

__int64 __fastcall ndisClearReceiveFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 ReceiveFilterByFilterId; // rax
  void *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qD(0x19u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2689645;
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  v6 = (void *)ReceiveFilterByFilterId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
    ndisDereferenceReceiveFilter(v6);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qdD(0x1Au, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, a1, a2, v4);
  return v4;
}
