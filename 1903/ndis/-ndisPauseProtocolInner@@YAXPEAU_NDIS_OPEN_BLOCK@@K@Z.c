/*
 * XREFs of ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C011DB0C
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D9AC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 */

void __fastcall ndisPauseProtocolInner(struct _NDIS_OPEN_BLOCK *a1)
{
  _QWORD v2[22]; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v3[4]; // [rsp+D0h] [rbp+37h] BYREF

  memset(v2, 0, sizeof(v2));
  v3[1] = 0;
  v3[0] = 786816;
  v3[2] = 1;
  ndisInitializeNetPnPEvent(v2, 0LL);
  LODWORD(v2[1]) = 8;
  v2[2] = v3;
  LODWORD(v2[3]) = 12;
  ndisPnPNotifyBindingUnlocked((__int64)a1);
}
