/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C0002890
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008D050 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C008D5E0 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C008EF70 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0095F20 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00966F0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00988D0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0099070 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009B140 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C009DB00 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C009DEE0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C009E6C0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C009E980 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C009F270 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C009F730 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009FA60 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C009FDE0 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00A7D30 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00A7FC0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00A83B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00A86D0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00A8880 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00A9A50 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00A9E50 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A9F20 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AA190 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00ABB50 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00ABD90 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B0E20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B0F50 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B1090 (ACPIRootIrpStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return ACPIDispatchPnpTableNames[v2];
}
