/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C00302C0
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C001E4B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

char __fastcall NdisTraceLoggingDeviceAdded(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  const WCHAR *v10; // r10
  const WCHAR *v11; // rdx
  unsigned int v12; // eax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v15; // r9d
  const WCHAR *v16; // r10
  const WCHAR *v17; // rdx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v21; // [rsp+38h] [rbp-89h] BYREF
  int v22; // [rsp+3Ch] [rbp-85h] BYREF
  int v23; // [rsp+40h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-79h] BYREF
  int *v25; // [rsp+68h] [rbp-59h]
  __int64 v26; // [rsp+70h] [rbp-51h]
  __int64 *v27; // [rsp+78h] [rbp-49h]
  __int64 v28; // [rsp+80h] [rbp-41h]
  __int64 v29; // [rsp+88h] [rbp-39h]
  __int64 v30; // [rsp+90h] [rbp-31h] BYREF
  unsigned int *p_Size; // [rsp+98h] [rbp-29h]
  __int64 v32; // [rsp+A0h] [rbp-21h]
  _EVENT_DATA_DESCRIPTOR v33; // [rsp+A8h] [rbp-19h] BYREF
  int *v34; // [rsp+B8h] [rbp-9h]
  __int64 v35; // [rsp+C0h] [rbp-1h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  __int64 v37; // [rsp+D0h] [rbp+Fh]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp+17h] BYREF
  int *v39; // [rsp+E8h] [rbp+27h]
  __int64 v40; // [rsp+F0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  if ( a4 < 0 )
  {
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(v6) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v6 )
      {
        v22 = v15;
        v25 = &v22;
        v17 = (const WCHAR *)&unk_1C00CDC00;
        v26 = 4LL;
        v27 = (__int64 *)&v21;
        v21 = a2;
        if ( v16 )
          v17 = v16;
        p_Size = (unsigned int *)(a3 + 16);
        v28 = 4LL;
        v29 = a3;
        v30 = 16LL;
        v32 = 8LL;
        TlgCreateWsz(&v33, v17);
        v34 = &v23;
        v23 = a6;
        v35 = 4LL;
        LOBYTE(v6) = TlgWrite(&hProvider, &unk_1C00D1E97, v18, v19, 8u, &pData);
      }
    }
  }
  else if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      v11 = (const WCHAR *)&unk_1C00CDC00;
      v21 = *(_DWORD *)(a1 + 4);
      v26 = 4LL;
      v25 = &v21;
      v27 = &v30;
      v29 = a1 + 598;
      v12 = *(_WORD *)(a1 + 596) & 0xFFFE;
      v28 = 2LL;
      v30 = v12;
      p_Size = &v33.Size;
      v33.Ptr = a1 + 10;
      v33.Size = *(_WORD *)(a1 + 8) & 0xFFFE;
      v32 = 2LL;
      v34 = (int *)(a1 + 540);
      v33.Reserved = 0;
      if ( v10 )
        v11 = v10;
      v36 = a1 + 1312;
      v35 = 16LL;
      v37 = 8LL;
      TlgCreateWsz(&pDesc, v11);
      v39 = &v22;
      v22 = a6;
      v40 = 4LL;
      LOBYTE(v6) = TlgWrite(&hProvider, &unk_1C00D1ABB, v13, v14, 0xBu, &pData);
    }
  }
  return (char)v6;
}
