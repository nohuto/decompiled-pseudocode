/*
 * XREFs of McTemplateK0jqxq @ 0x1C0061768
 * Callers:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0012A50 (ndisGenericWaitWakeCallback.c)
 *     ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012D30 (-ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0012E40 (-ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisSignalD0RequestComplete @ 0x1C0014420 (ndisSignalD0RequestComplete.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     ndisCancelWaitWake @ 0x1C0019D1C (ndisCancelWaitWake.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisRequestWaitWake @ 0x1C0032E8C (ndisRequestWaitWake.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003F248 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ndisPnPPortActivation @ 0x1C0062064 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C006272C (ndisPnPPortDeactivation.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097550 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMAbortRequests @ 0x1C0099A04 (ndisMAbortRequests.c)
 *     ndisMProcessDeferred @ 0x1C009B0EC (ndisMProcessDeferred.c)
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5784 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C00A6078 (ndisWdmSendOidPmParametersForSx.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BD40 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqxq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]

  v9 = a4;
  v11 = &a5;
  v10 = 16LL;
  v13 = &a6;
  v12 = 4LL;
  v15 = &a7;
  v14 = 8LL;
  v16 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, a2, a3, 5u, &EventData);
}
