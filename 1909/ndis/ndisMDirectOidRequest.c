/*
 * XREFs of ndisMDirectOidRequest @ 0x1C006B340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DC4 (ndisReferenceOpenByHandle.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     IsOidRequestDirectOid @ 0x1C0068C30 (IsOidRequestDirectOid.c)
 */

__int64 __fastcall ndisMDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rdi
  char v8; // [rsp+30h] [rbp-28h]

  v2 = a2;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      16,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v8);
  }
  if ( IsOidRequestDirectOid(*(_DWORD *)(v2 + 32)) )
  {
    if ( ndisReferenceOpenByHandle(a1, 6u) )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 776LL) )
        goto LABEL_10;
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v6 + 3688) & 0x400) == 0 )
        *(_BYTE *)(v2 + 232) = 1;
      memset((void *)(v2 + 72), 0, 0x60uLL);
      *(_DWORD *)(v2 + 88) |= 0x200020u;
      *(_QWORD *)(v2 + 96) = 0LL;
      *(_QWORD *)(v2 + 104) = a1;
      v4 = ndisDoDirectOidRequest((_DWORD *)v2, (KSPIN_LOCK *)v6, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked(a1, 6);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      17,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v2,
      v4);
  }
  return v4;
}
