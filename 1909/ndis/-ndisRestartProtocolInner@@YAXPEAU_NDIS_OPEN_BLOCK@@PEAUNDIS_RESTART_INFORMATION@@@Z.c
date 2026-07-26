/*
 * XREFs of ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01051A4
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 */

void __fastcall ndisRestartProtocolInner(struct _NDIS_OPEN_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  char v3; // di
  _QWORD v4[22]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = (char)a1;
  memset(v4, 0, sizeof(v4));
  ndisInitializeNetPnPEvent(v4, 0LL);
  LODWORD(v4[1]) = 9;
  v4[2] = &a2->ProtocolParameters;
  LODWORD(v4[3]) = 56;
  ndisPnPNotifyBindingUnlocked(v3);
}
