/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003E02C (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B8484 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00F2EF4 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00F30DC (ndisPnPQueryRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00F4190 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 * Callees:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00186F0 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B872C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00C2FC4 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // rsi
  unsigned int v9; // edi
  _BYTE v11[160]; // [rsp+20h] [rbp-D8h] BYREF
  int v12; // [rsp+C0h] [rbp-38h]

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x3Bu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)a1, v2);
  ndisInitializeNetPnPEvent(v11, 0LL);
  ndisShallowCopyNetPnPEvent(v11, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_15;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_15;
  if ( !v2 && *v4 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12 |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL);
  v8 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_15:
    v9 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v11);
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 7u);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x3Cu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)a1);
  return v9;
}
