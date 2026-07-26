/*
 * XREFs of McTemplateK0jqxqd @ 0x1C00619C8
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012F30 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C003483C (ndisCheckMiniportWakeUpCapable.c)
 *     ndisPnPPortActivation @ 0x1C0062234 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C00628FC (ndisPnPPortDeactivation.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A72F8 (ndisWdfNotifySystemPower.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8860 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00618DC (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqxqd(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v10 = a4;
  v12 = &a5;
  v11 = 16LL;
  v14 = &a6;
  v13 = 4LL;
  v16 = &a7;
  v18 = &a8;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, a2, a3, 6u, &EventData);
}
