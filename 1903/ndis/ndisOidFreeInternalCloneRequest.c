/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C0009B60
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0068478 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMOidRequestComplete @ 0x1C0068F50 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C008D7F0 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C008EB08 (ndisFInvokeDirectOidRequest.c)
 *     ndisMAbortRequests @ 0x1C0099A04 (ndisMAbortRequests.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(KSPIN_LOCK *a1, __int64 a2, char a3, KSPIN_LOCK *a4)
{
  __int64 v5; // rbx
  KSPIN_LOCK *v6; // rbp
  KSPIN_LOCK *v7; // r14
  KSPIN_LOCK v8; // rsi
  KIRQL v9; // al
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rdi

  v5 = a2;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_BYTE *)a1 == 5 )
    v7 = a1;
  else
    v6 = a1;
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 12 )
    {
      *(_DWORD *)(v8 + 60) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v8 + 64) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(v8 + 68) = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(v8 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v8 + 48) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 52);
    }
    else
    {
      *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(a2 + 56);
      *(_QWORD *)(v8 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v8 + 48) = *(_DWORD *)(a2 + 48);
    }
    if ( a3 && (*(_DWORD *)(v8 + 88) & 0x400) == 0 )
    {
      if ( v7 )
      {
        v9 = KeAcquireSpinLockRaiseToDpc(v7 + 18);
        v10 = v7 + 18;
        v7[22] = v8;
        v7[19] = 0LL;
      }
      else
      {
        v9 = KeAcquireSpinLockRaiseToDpc(v6 + 12);
        v10 = v6 + 12;
        v6[276] = v8;
        v6[65] = 0LL;
      }
      KeReleaseSpinLock(v10, v9);
    }
    v11 = *(_QWORD *)(v5 + 96);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        181,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v5,
        *(_QWORD *)(v5 + 24));
    }
    if ( v11 )
    {
      *(_BYTE *)(v11 + 232) = *(_BYTE *)(v5 + 232);
      *(_DWORD *)(v11 + 152) = *(_DWORD *)(v5 + 152);
    }
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      35,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
  }
  if ( a4 )
    *a4 = v8;
}
