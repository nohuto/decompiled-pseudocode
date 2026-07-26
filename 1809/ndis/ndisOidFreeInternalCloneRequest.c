/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C000F400
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043268 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMDirectOidRequestComplete @ 0x1C00437C0 (NdisMDirectOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C0043840 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C005A960 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C005B7C8 (ndisFInvokeDirectOidRequest.c)
 *     ndisMAbortRequests @ 0x1C0062084 (ndisMAbortRequests.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C0062FF0 (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00B7B80 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(KSPIN_LOCK *a1, __int64 a2, char a3, KSPIN_LOCK *a4)
{
  KSPIN_LOCK *v7; // r15
  KSPIN_LOCK *v8; // rbp
  KSPIN_LOCK v9; // rsi
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdi

  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)a1 == 5 )
    v7 = a1;
  else
    v8 = a1;
  v9 = *(_QWORD *)(a2 + 96);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(45LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a2, v9, *(_DWORD *)(a2 + 32));
  if ( v9 )
  {
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 12 )
    {
      *(_DWORD *)(v9 + 60) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v9 + 64) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(v9 + 68) = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v9 + 52) = *(_DWORD *)(a2 + 52);
    }
    else
    {
      *(_DWORD *)(v9 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(v9 + 56) = *(_DWORD *)(a2 + 56);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
    }
    if ( a3 && (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v7 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v7 + 18);
        v11 = v7 + 18;
        v7[23] = v9;
        v7[19] = 0LL;
        *((_DWORD *)v7 + 40) = 0;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v8 + 12);
        v11 = v8 + 12;
        v8[278] = v9;
        v8[65] = 0LL;
        *((_DWORD *)v8 + 466) = 0;
      }
      KeReleaseSpinLock(v11, v10);
    }
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 96);
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(199LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *(_QWORD *)(a2 + 24), a2);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = *(_BYTE *)(a2 + 232);
      *(_DWORD *)(v13 + 152) = *(_DWORD *)(a2 + 152);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(200LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v12, 0LL);
  }
  else if ( (unsigned __int8)byte_1C00A025A >= 2u )
  {
    WPP_SF_(46LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids);
  }
  if ( a4 )
    *a4 = v9;
}
