/*
 * XREFs of ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C001361C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C001D0D8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0013A1C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRscHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  const GUID *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v9 = 16LL;
      v8 = v4 + 4040;
      v5 = *(unsigned __int8 *)(v3 + 144);
      v10 = &v5;
      v6 = *(unsigned __int8 *)(v3 + 145);
      v12 = &v6;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(&hProvider, &unk_1C008C640, v2, (LPCGUID)v3, 5u, &pData);
    }
  }
}
