/*
 * XREFs of ndisOidPostRcvFilterSetFilter @ 0x1C003BB40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisClearReceiveFilter @ 0x1C003AFA4 (ndisClearReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003B534 (ndisFindReceiveFilterByFilterId.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int v5; // edx
  KIRQL v6; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x16u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, v1);
  if ( v3 && *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *(_DWORD *)(a1 + 40) )
    {
      v5 = *(_DWORD *)(v4 + 16);
      if ( v5 )
        ndisClearReceiveFilter(v3, v5);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1864) = 2689384;
      ndisFindReceiveFilterByFilterId(v3, *(_DWORD *)(v4 + 16));
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x17u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, *(_DWORD *)(a1 + 40));
}
