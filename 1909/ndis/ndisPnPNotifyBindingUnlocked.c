/*
 * XREFs of ndisPnPNotifyBindingUnlocked @ 0x1C0105238
 * Callers:
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01051A4 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C011DB0C (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C001C5B0 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C7A8 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyBindingUnlocked(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT v4; // [rsp+20h] [rbp-28h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  ndisAcquireMiniportPnPEventLock(*(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16), &v4);
  v2 = ndisPnPNotifyBinding(a1);
  ndisReleaseMiniportPnPEventLock(*(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16));
  ndisDereferencePackage((__int64)&ndisPkgs);
  return v2;
}
