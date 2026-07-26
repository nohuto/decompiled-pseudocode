/*
 * XREFs of ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C784
 * Callers:
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C007D128 (-ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiniportSupportsReceiveThrottle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 MajorNdisVersion; // al

  MajorNdisVersion = a1->MajorNdisVersion;
  return (MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u)
      && (a1->PnPFlags & 0x400000) == 0;
}
