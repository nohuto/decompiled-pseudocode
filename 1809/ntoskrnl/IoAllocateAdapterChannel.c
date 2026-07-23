/*
 * XREFs of IoAllocateAdapterChannel @ 0x140283020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall IoAllocateAdapterChannel(
        PDMA_ADAPTER DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        ULONG NumberOfMapRegisters,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  return ((__int64 (__fastcall *)(PDMA_ADAPTER, PDEVICE_OBJECT, ULONG, PDRIVER_CONTROL, PVOID))DmaAdapter->DmaOperations->AllocateAdapterChannel)(
           DmaAdapter,
           DeviceObject,
           NumberOfMapRegisters,
           ExecutionRoutine,
           Context);
}
