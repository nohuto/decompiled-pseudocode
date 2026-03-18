/*
 * XREFs of VfEvtDeviceSelfManagedIoFlush @ 0x1C00C4BC0
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C0045308 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0045334 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0045390 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4308 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceSelfManagedIoFlush(WDFDEVICE__ *Device)
{
  char *TypedContext; // rdi
  void (__fastcall *v3)(WDFDEVICE__ *); // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+38h] [rbp+10h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v3 = (void (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 9);
  if ( v3 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v3(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v3);
  }
}
