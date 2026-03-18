/*
 * XREFs of VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C0680
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C0045C2C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0045C58 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0045CB4 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C02E0 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0ExitPreInterruptsDisabled(WDFDEVICE__ *Device, unsigned int TargetState)
{
  unsigned int v4; // edi
  char *TypedContext; // rsi
  __int64 (__fastcall *v6)(WDFDEVICE__ *, _QWORD); // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 5);
  if ( v6 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v4 = v6(Device, TargetState);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v6);
  }
  return v4;
}
