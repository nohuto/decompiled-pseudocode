/*
 * XREFs of ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C00C38B4
 * Callers:
 *     NdisMPromoteMiniport @ 0x1C0098600 (NdisMPromoteMiniport.c)
 *     NdisMSetMiniportSecondary @ 0x1C0098A90 (NdisMSetMiniportSecondary.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void NdisTraceLoggingRareMiniportPath()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // r10d
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v8 = 16LL;
      v7 = v3 + 4008;
      v9 = &v4;
      v11 = &v5;
      v4 = v2;
      v10 = 4LL;
      v5 = (int)v1;
      v12 = 4LL;
      TlgWrite(&hProvider, &unk_1C00D1242, v0, v1, 5u, &pData);
    }
  }
}
