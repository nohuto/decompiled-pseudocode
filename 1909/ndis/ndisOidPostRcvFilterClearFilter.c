/*
 * XREFs of ndisOidPostRcvFilterClearFilter @ 0x1C005F670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisClearReceiveFilter @ 0x1C005F39C (ndisClearReceiveFilter.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  __int64 v3; // rsi
  int v4; // ecx
  KIRQL v5; // al

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( !v4 || v4 == 65539 && (v1->Flags & 4) != 0 )
    {
      if ( *(_DWORD *)(v3 + 48) >= 0x10u )
      {
        ndisClearReceiveFilter(v1, *(_DWORD *)(*(_QWORD *)(v3 + 40) + 12LL));
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          11,
          24,
          (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
          (char)v1,
          v4);
      v5 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
      v1->MiniportThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(v3 + 88) & 0x10000) != 0
        && (v1->PnPFlags & 0x1000000) == 0
        && (v1->DriverHandle->Flags & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          v1->pAdapterInstanceName,
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, (ULONG_PTR)v1, *(unsigned int *)(v3 + 32), *(int *)(a1 + 40));
      }
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v5);
    }
  }
}
