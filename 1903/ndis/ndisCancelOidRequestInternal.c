/*
 * XREFs of ndisCancelOidRequestInternal @ 0x1C0069DF4
 * Callers:
 *     NdisCancelOidRequest @ 0x1C0068E00 (NdisCancelOidRequest.c)
 *     ndisFCancelOidRequestInternal @ 0x1C008E3F0 (ndisFCancelOidRequestInternal.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A37F0 (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0069F84 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C006A144 (ndisCancelOidRequestOnMiniport.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C006FDE8 (ndisRefNextFilterForOidCancellation.c)
 *     ndisFInvokeCancelOidRequest @ 0x1C008EA44 (ndisFInvokeCancelOidRequest.c)
 *     ndisMInvokeCancelOidRequest @ 0x1C009AD5C (ndisMInvokeCancelOidRequest.c)
 */

char __fastcall ndisCancelOidRequestInternal(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r14
  char v12; // r14
  __int64 v14; // [rsp+40h] [rbp-38h]
  char v15; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0xB8u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      a2,
      a3,
      a4);
  while ( 1 )
  {
    v9 = ndisRefNextFilterForOidCancellation(a1, v8, &v15);
    v11 = v9;
    if ( !v9 )
      break;
    if ( v8 != a2 )
      ndisDereferenceRef((PKSPIN_LOCK)(v8 + 312), 1u);
    v8 = v11;
    ndisCancelOidRequestOnFilter(v11);
    if ( !a4 && *(_QWORD *)(*(_QWORD *)(v11 + 16) + 264LL) )
    {
      LOBYTE(v9) = ndisFInvokeCancelOidRequest(v11);
      v12 = 0;
      goto LABEL_10;
    }
  }
  v12 = v15;
LABEL_10:
  if ( v8 != a2 )
    LOBYTE(v9) = ndisDereferenceRef((PKSPIN_LOCK)(v8 + 312), 1u);
  if ( v12 )
  {
    LOBYTE(v9) = ndisCancelOidRequestOnMiniport(a1);
    if ( *(_BYTE *)(a1 + 32) >= 6u && !a4 )
    {
      v9 = *(_QWORD *)(a1 + 3760);
      if ( *(_QWORD *)(v9 + 240) )
        LOBYTE(v9) = ndisMInvokeCancelOidRequest(a1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = a4;
    LOBYTE(v9) = WPP_RECORDER_SF_qqqd(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   v10,
                   0xBu,
                   0xB9u,
                   (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                   a1,
                   a2,
                   a3,
                   v14);
  }
  return v9;
}
