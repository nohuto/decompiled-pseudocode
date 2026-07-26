/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24
 * Callers:
 *     ndisPnPPortActivation @ 0x1C0062234 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C00628FC (ndisPnPPortDeactivation.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C009FAA8 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FC30 (ndisPnPQueryRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00A44E0 (NdisMNetPnPEvent.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00FC564 (ndisIssueNetEventSetPowerEvent.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0014018 (ndisGetHigherFilterWithPnpRef.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00FCDB8 (ndisShallowCopyNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ebp
  int *v6; // rsi
  __int64 v7; // r8
  int v8; // ecx
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v10; // rsi
  unsigned int v11; // edi
  int v12; // edx
  struct _NET_PNP_EVENT_NOTIFICATION NetPnPEventNotification; // [rsp+40h] [rbp-E8h] BYREF

  memset(&NetPnPEventNotification, 0, sizeof(NetPnPEventNotification));
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(int **)(a2 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      62,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      *(_DWORD *)(a2 + 8));
  }
  ndisInitializeNetPnPEvent(&NetPnPEventNotification, 0LL);
  ndisShallowCopyNetPnPEvent(&NetPnPEventNotification, a2);
  if ( !(unsigned __int8)ndisIsMiniportStarted(a1) )
    goto LABEL_15;
  v8 = *(_DWORD *)(a1 + 1520);
  if ( ((v8 - 1) & 0xFFFFFFFC) != 0 || v8 == 3 )
    goto LABEL_15;
  if ( !v5 && *v6 > 1 && (*(_DWORD *)(a1 + 124) & 0x20) == 0 )
    NetPnPEventNotification.Flags |= 1u;
  LOBYTE(v7) = 7;
  HigherFilterWithPnpRef = (struct _NDIS_FILTER_BLOCK *)ndisGetHigherFilterWithPnpRef(a1, 0LL, v7);
  v10 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_15:
    v11 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v11 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, &NetPnPEventNotification);
    ndisDereferenceRef(&v10->PnPRef.SpinLock);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      13,
      63,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v5,
      v11);
  return v11;
}
