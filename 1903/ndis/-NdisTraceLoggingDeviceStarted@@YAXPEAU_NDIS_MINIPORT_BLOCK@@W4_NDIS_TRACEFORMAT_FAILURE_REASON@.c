/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0030588
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031294 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(__int64 a1, int a2, int a3)
{
  __int64 v4; // r9
  _DWORD *v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // edx
  const GUID *cData; // r8
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // r10
  int v21; // r11d
  int v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  int *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]
  char *v31; // [rsp+80h] [rbp+27h]
  int v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+8Ch] [rbp+33h]
  _DWORD *v34; // [rsp+90h] [rbp+37h]
  int v35; // [rsp+98h] [rbp+3Fh]
  int v36; // [rsp+9Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v25 = &v22;
      v28 = &v23;
      v31 = (char *)(v20 + 4008);
      v22 = v21;
      v26 = 4;
      v23 = a2;
      v29 = 4;
      v32 = 16;
      TlgWrite(&hProvider, &unk_1C00D1E4E, v18, v19, (UINT32)v19, &pData);
    }
  }
  else if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
  {
    v6 = v4 - 4;
    v7 = v4 - 1;
    cData = (const GUID *)(unsigned int)(v4 + 1);
    v9 = v5[1016] - (v4 - 4);
    if ( !v9 )
    {
      v4 = v6;
      goto LABEL_8;
    }
    v10 = v9 - v6;
    if ( v10 )
    {
      v12 = v10 - v6;
      if ( v12 )
      {
        v13 = v12 - v6;
        if ( !v13 )
          goto LABEL_24;
        v14 = v13 - v6;
        if ( !v14 )
        {
          v16 = v5[1017];
          if ( v16 )
          {
            if ( v16 == v7 )
            {
              v4 = 8LL;
            }
            else
            {
              v4 = 9LL;
              if ( v16 != 8 )
                v4 = 7LL;
            }
          }
          else
          {
            v4 = 7LL;
          }
          goto LABEL_8;
        }
        v15 = v14 - v6;
        if ( !v15 )
        {
          v4 = 10LL;
          goto LABEL_8;
        }
        if ( v15 != v6 )
        {
LABEL_24:
          v4 = (unsigned int)cData;
          goto LABEL_8;
        }
        v4 = 11LL;
      }
    }
    else
    {
      v11 = v5[1017];
      if ( !v11 )
        goto LABEL_7;
      v17 = v11 - v6;
      if ( !v17 )
      {
        v4 = 3LL;
        goto LABEL_8;
      }
      if ( v17 == v6 )
        v4 = v7;
      else
LABEL_7:
        v4 = 2LL;
    }
LABEL_8:
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v25 = &v22;
    v28 = v5 + 8;
    v31 = (char *)v5 + 33;
    v34 = v5 + 1002;
    v22 = v4;
    v26 = v7;
    v29 = v6;
    v32 = v6;
    v35 = 16;
    TlgWrite(&hProvider, &unk_1C00D236C, cData, (LPCGUID)v4, (UINT32)cData, &pData);
  }
}
