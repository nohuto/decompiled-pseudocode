/*
 * XREFs of ndisCancelOidRequestInternal @ 0x1C0044178
 * Callers:
 *     NdisCancelOidRequest @ 0x1C00436C0 (NdisCancelOidRequest.c)
 *     ndisFCancelOidRequestInternal @ 0x1C005B1D0 (ndisFCancelOidRequestInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00690CC (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C00442C8 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C0044464 (ndisCancelOidRequestOnMiniport.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0048AD8 (ndisRefNextFilterForOidCancellation.c)
 *     ndisFInvokeCancelOidRequest @ 0x1C005B748 (ndisFInvokeCancelOidRequest.c)
 *     ndisMInvokeCancelOidRequest @ 0x1C0062F70 (ndisMInvokeCancelOidRequest.c)
 */

void __fastcall ndisCancelOidRequestInternal(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r14
  char v11; // r14
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(0xCBu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3, a4);
  while ( 1 )
  {
    v10 = ndisRefNextFilterForOidCancellation(a1, v8, &v13);
    if ( !v10 )
      break;
    if ( v8 != a2 )
      ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 1u);
    LOBYTE(v9) = a4;
    v8 = v10;
    ndisCancelOidRequestOnFilter(v10, a3, v9);
    if ( !a4 && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 264LL) )
    {
      ndisFInvokeCancelOidRequest(v10, a3);
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v13;
LABEL_10:
  if ( v8 != a2 )
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 1u);
  if ( v11 )
  {
    LOBYTE(v9) = a4;
    ndisCancelOidRequestOnMiniport(a1, a3, v9);
    if ( *(_BYTE *)(a1 + 32) >= 6u && !a4 && *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 240LL) )
      ndisMInvokeCancelOidRequest(a1, a3);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v12) = a4;
    WPP_SF_qqqL(0xCCu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3, v12);
  }
}
