/*
 * XREFs of DeRegisterOpRegionHandler @ 0x1C00B1480
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C000BF00 (OSConvertDeviceHandleToNSHANDLE.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1524 (UnRegisterOperationRegionHandler.c)
 */

NTSTATUS __stdcall DeRegisterOpRegionHandler(PDEVICE_OBJECT DeviceObject, PVOID OperationRegionObject)
{
  __int64 v4; // rax

  if ( !DeviceObject )
    return -1073741811;
  v4 = OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return UnRegisterOperationRegionHandler(v4, OperationRegionObject);
}
