/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C0001D50
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F010 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C008F640 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008F850 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C00939D0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0093BE0 (ACPIFilterIrpStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C00940E0 (ACPIBusIrpQueryResources.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00945B0 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0094D90 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0095390 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0096794 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0097350 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009D030 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C009F160 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C009F8C0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C009FF90 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C00A03B0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A1570 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A1B90 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A29C0 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB1F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00AB4C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00AB910 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00ABC70 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00ABE30 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD080 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00AD4F0 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AD5D0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AD860 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF240 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AF490 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B47A0 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B48E0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B4A30 (ACPIRootIrpStopDevice.c)
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
