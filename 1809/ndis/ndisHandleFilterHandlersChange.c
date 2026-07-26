/*
 * XREFs of ndisHandleFilterHandlersChange @ 0x1C0024818
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 *     ndisQueryFilterInstanceHandlers @ 0x1C00D0488 (ndisQueryFilterInstanceHandlers.c)
 */

void __fastcall ndisHandleFilterHandlersChange(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // bl

  ndisQueryFilterInstanceHandlers(*(_QWORD *)(a1 + 2056));
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v3 = v2;
  *(_DWORD *)(a1 + 1864) = 2102601;
  ndisSetupLwfMiniportHandlers(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
}
