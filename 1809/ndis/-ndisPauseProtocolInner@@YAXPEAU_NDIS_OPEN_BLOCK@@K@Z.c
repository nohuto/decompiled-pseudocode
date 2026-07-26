/*
 * XREFs of ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BADF4
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BAD28 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00C33BC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPauseProtocolInner(struct _NDIS_OPEN_BLOCK *a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-79h] BYREF
  int v3; // [rsp+28h] [rbp-71h]
  __int64 *v4; // [rsp+30h] [rbp-69h]
  int v5; // [rsp+38h] [rbp-61h]
  __int64 v6; // [rsp+D0h] [rbp+37h] BYREF
  int v7; // [rsp+D8h] [rbp+3Fh]

  v7 = 1;
  v6 = 786816LL;
  ndisInitializeNetPnPEvent(v2, 0LL);
  v3 = 8;
  v4 = &v6;
  v5 = 12;
  ndisPnPNotifyBindingUnlocked(a1, v2);
}
