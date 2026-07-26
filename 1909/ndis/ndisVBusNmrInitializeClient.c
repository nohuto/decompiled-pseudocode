/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C0146280
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  byte_1C00E61D8 = 0;
  ExInitializeRundownProtection(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = ndisVBusDetachComplete;
  WorkItem.List.Flink = 0LL;
  ndisVBus.ClientAttachProvider = (PNPI_CLIENT_ATTACH_PROVIDER_FN)ndisVBusNmrClientAttachProvider;
  *(_DWORD *)&ndisVBus.Version = 4718592;
  ndisVBus.ClientDetachProvider = (PNPI_CLIENT_DETACH_PROVIDER_FN)ndisVBusNmrClientDetachProvider;
  *(_DWORD *)&ndisVBus.ClientRegistrationInstance.Version = 2621441;
  ndisVBus.ClientCleanupBindingContext = (PNPI_CLIENT_CLEANUP_BINDING_CONTEXT_FN)ndisFakeMiniportCancelSendPackets;
  ndisVBus.ClientRegistrationInstance.NpiId = (PNPIID)&NPI_NDIS_VBUS_INTERFACE_ID;
  ndisVBus.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
  ndisVBus.ClientRegistrationInstance.Number = 0;
  ndisVBus.ClientRegistrationInstance.NpiSpecificCharacteristics = 0LL;
  return NmrRegisterClient(&ndisVBus, 0LL, &NmrClientHandle);
}
