/*
 * XREFs of McTemplateK0jqxqqq @ 0x1C0068DD0
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C0012A50 (ndisGenericWaitWakeCallback.c)
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025978 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B19C (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C003B4A4 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     NdisMRegisterInterrupt @ 0x1C00A1070 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6544 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6750 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     NdisMRegisterInterruptEx @ 0x1C012F4F0 (NdisMRegisterInterruptEx.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00618DC (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqxqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  char *v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]

  v11 = a4;
  v13 = &a5;
  v12 = 16LL;
  v15 = &a6;
  v14 = 4LL;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, a2, a3, 7u, &EventData);
}
