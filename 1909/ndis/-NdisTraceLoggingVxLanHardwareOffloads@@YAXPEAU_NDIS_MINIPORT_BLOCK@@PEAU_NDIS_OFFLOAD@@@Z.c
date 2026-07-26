/*
 * XREFs of ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020870
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0030760 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingVxLanHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // ecx
  char v5; // al
  char v6; // al
  char v7; // [rsp+30h] [rbp-69h] BYREF
  char v8; // [rsp+31h] [rbp-68h] BYREF
  char v9; // [rsp+32h] [rbp-67h] BYREF
  char v10; // [rsp+33h] [rbp-66h] BYREF
  char v11; // [rsp+34h] [rbp-65h] BYREF
  int v12; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  char *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  char *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  char *v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  char *v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  int *v24; // [rsp+B0h] [rbp+17h]
  __int64 v25; // [rsp+B8h] [rbp+1Fh]
  __int64 v26; // [rsp+C0h] [rbp+27h]
  __int64 v27; // [rsp+C8h] [rbp+2Fh]
  char *v28; // [rsp+D0h] [rbp+37h]
  __int64 v29; // [rsp+D8h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v4 = *(_DWORD *)(v2 + 156);
      v14 = v3 + 4008;
      v5 = *(_BYTE *)(v2 + 156) & 0xF;
      v15 = 16LL;
      v7 = v5;
      v16 = &v7;
      v17 = 1LL;
      v8 = (v4 >> 4) & 0xF;
      v18 = &v8;
      v9 = BYTE1(v4) & 0xF;
      v19 = 1LL;
      v20 = &v9;
      v22 = &v10;
      v12 = *(_DWORD *)(v2 + 160);
      v24 = &v12;
      v26 = v2 + 164;
      v6 = *(_BYTE *)(v2 + 166) & 1;
      v21 = 1LL;
      v11 = v6;
      v28 = &v11;
      v10 = BYTE2(v4) & 0xF;
      v23 = 1LL;
      v25 = 4LL;
      v27 = 2LL;
      v29 = 1LL;
      TlgWrite(&hProvider, &unk_1C00D0DFC, (LPCGUID)1, (LPCGUID)v2, 0xAu, &pData);
    }
  }
}
