/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x140A1AE90
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x14077D2B4 (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiProcessAddBootDevices @ 0x140780918 (PiProcessAddBootDevices.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx

  v2 = PnpDeviceObjectFromDeviceInstanceWithTag(a2, 0x746C6644u);
  v3 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2);
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 1LL;
}
