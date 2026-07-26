/*
 * XREFs of ?NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0030F74
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0030760 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingLsoV2HardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  const GUID *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  char v5; // al
  char v6; // al
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  char *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v17 = 16LL;
      v16 = v4 + 4008;
      v9 = *(_DWORD *)(v3 + 80);
      v18 = &v9;
      v10 = *(_DWORD *)(v3 + 84);
      v20 = &v10;
      v11 = *(_DWORD *)(v3 + 88);
      v22 = &v11;
      v12 = *(_DWORD *)(v3 + 92);
      v24 = &v12;
      v13 = *(_DWORD *)(v3 + 96);
      v26 = &v13;
      v14 = *(_DWORD *)(v3 + 100);
      v28 = &v14;
      v5 = *(_BYTE *)(v3 + 104) & 3;
      v19 = 4LL;
      v7 = v5;
      v30 = &v7;
      v6 = (*(_DWORD *)(v3 + 104) >> 2) & 3;
      v21 = 4LL;
      v8 = v6;
      v32 = &v8;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 1LL;
      TlgWrite(&hProvider, &unk_1C00D12E6, v2, (LPCGUID)v3, 0xBu, &pData);
    }
  }
}
