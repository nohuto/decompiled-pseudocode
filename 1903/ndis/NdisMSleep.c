/*
 * XREFs of NdisMSleep @ 0x1C001BEC0
 * Callers:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F20 (ndisIndicateInitialStateToFilter.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011DE24 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMSleep(ULONG MicrosecondsToSleep)
{
  struct _KTIMER Timer; // [rsp+30h] [rbp-48h] BYREF

  KeInitializeTimerEx(&Timer, SynchronizationTimer);
  if ( MicrosecondsToSleep == -1 )
  {
    MicrosecondsToSleep = 0;
  }
  else if ( MicrosecondsToSleep > 0x1C9C380 )
  {
    MicrosecondsToSleep = 30000000;
  }
  KeSetTimer(&Timer, (LARGE_INTEGER)(-10LL * (int)MicrosecondsToSleep), 0LL);
  KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
}
