/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C02AE224
 * Callers:
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_QWORD *)(v5 + 56);
  if ( *(_QWORD *)v6 != v6 )
  {
    do
    {
      if ( *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 4
        || *(_DWORD *)(v6 + 500) != *(_DWORD *)(v3 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v3 + 168) )
      {
        v7 = *(_QWORD *)(v6 + 168);
        *(_QWORD *)(v3 + 168) = v7;
        ++*(_DWORD *)(v7 + 104);
        v8 = *(_QWORD *)(v6 + 1456);
        *(_QWORD *)(v3 + 1456) = v8;
        ++*(_DWORD *)(v8 + 8);
        a1 = *(_QWORD *)(v6 + 1464);
        *(_QWORD *)(v3 + 1464) = a1;
        ++*(_DWORD *)(a1 + 8);
      }
      if ( *(_BYTE *)(v3 + 508) == 1 )
      {
        v9 = v3;
        v10 = v6;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 508) != 1 )
          goto LABEL_20;
        v9 = v6;
        v10 = v3;
      }
      if ( *(_BYTE *)(v10 + 508) == 1 || *(_DWORD *)(v9 + 2736) >= *(_DWORD *)(v9 + 504) )
      {
        v4 = -1071774666;
        v11 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v11 + 24) = -1071774666LL;
        WdLogEvent5_WdError(v11);
        return v4;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 484) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      *(_QWORD *)(v10 + 2728) = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v10 + 2736) = *(_DWORD *)(v9 + 2736);
      *(_QWORD *)(*(_QWORD *)(v9 + 2728) + 8LL * (unsigned int)(*(_DWORD *)(v9 + 2736))++) = *(_QWORD *)(v10 + 24);
      if ( *(_BYTE *)(v10 + 1152) )
        *(_BYTE *)(v9 + 1154) = 1;
      if ( *(_BYTE *)(v6 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v6 = *(_QWORD *)v6;
    }
    while ( *(_QWORD *)v6 != *(_QWORD *)(v5 + 56) );
  }
  return v4;
}
