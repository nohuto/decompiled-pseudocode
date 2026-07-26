/*
 * XREFs of ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C0123644
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRareFilterPath(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r10d
  int v3; // r11d
  int v4; // eax
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  int *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  _DWORD v20[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  __int64 v24; // [rsp+A0h] [rbp+27h]
  _DWORD v25[2]; // [rsp+A8h] [rbp+2Fh] BYREF
  _DWORD *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]

  if ( a1 )
  {
    if ( hProvider.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v15 = 0;
        v18 = 0;
        v20[1] = 0;
        v23 = 0;
        v25[1] = 0;
        v13 = &v10;
        v10 = v3;
        v16 = v20;
        v19 = *(_QWORD *)(v1 + 120);
        v4 = *(_WORD *)(v1 + 112) & 0xFFFE;
        v14 = 4;
        v20[0] = v4;
        v21 = v25;
        v24 = *(_QWORD *)(v1 + 152);
        v5 = *(_WORD *)(v1 + 144) & 0xFFFE;
        v17 = 2;
        v28 = 0;
        v25[0] = v5;
        v26 = v11;
        v22 = 2;
        v11[0] = v2;
        v27 = 4;
        TlgWrite(&hProvider, &unk_1C00D13CE, (LPCGUID)2, (LPCGUID)v1, 8u, &pData);
      }
    }
  }
  else if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = v11;
    v16 = &v10;
    v11[0] = v9;
    v14 = 4;
    v10 = v8;
    v17 = 4;
    TlgWrite(&hProvider, &unk_1C00D0BA1, v6, v7, 4u, &pData);
  }
}
