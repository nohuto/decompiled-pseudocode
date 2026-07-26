/*
 * XREFs of ndisOidPostRcvFilterClearFilter @ 0x1C003B7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisClearReceiveFilter @ 0x1C003AFA4 (ndisClearReceiveFilter.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rsi
  int v4; // r9d
  KIRQL v5; // dl

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( !v4 || v4 == 65539 && (*(_DWORD *)(v1 + 120) & 4) != 0 )
    {
      if ( *(_DWORD *)(v3 + 48) >= 0x10u )
      {
        ndisClearReceiveFilter(*(_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(v3 + 40) + 12LL));
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025A >= 2u )
        WPP_SF_qD(0x18u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v1, v4);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1864) = 2689581;
      if ( (*(_DWORD *)(v3 + 88) & 0x10000) != 0
        && (*(_DWORD *)(v1 + 124) & 0x1000000) == 0
        && (*(_BYTE *)(*(_QWORD *)(v1 + 3792) + 26LL) & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(v1 + 3888),
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, v1, *(unsigned int *)(v3 + 32), *(int *)(a1 + 40));
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
    }
  }
}
