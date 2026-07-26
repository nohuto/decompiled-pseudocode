/*
 * XREFs of ndisPowerSaveClearStop @ 0x1C00B8300
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C0010420 (ndisSignalD0RequestComplete.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004BAB8 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E7650 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00EA23C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00EF0D0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00F4500 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00F45E0 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C0075888 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0076CF4 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisPowerSaveClearStop(struct _NDIS_MINIPORT_BLOCK *a1, __int32 a2)
{
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, a2);
  if ( a1->AoAc )
    ndisAoAcClearStop(a1, (enum _NDIS_SS_STOP_REASON)a2);
}
