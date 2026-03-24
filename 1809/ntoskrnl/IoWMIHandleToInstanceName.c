/*
 * XREFs of IoWMIHandleToInstanceName @ 0x14071D890
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071D910 (IoWMIDeviceObjectToInstanceName.c)
 *     WmipGetFilePDO @ 0x14071DB50 (WmipGetFilePDO.c)
 */

NTSTATUS __stdcall IoWMIHandleToInstanceName(PVOID DataBlockObject, HANDLE FileHandle, PUNICODE_STRING InstanceName)
{
  int FilePDO; // ebx
  UNICODE_STRING *v6; // r8
  PDEVICE_OBJECT v7; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp+20h] BYREF

  FilePDO = WmipGetFilePDO(FileHandle, 0LL, &DeviceObject);
  if ( FilePDO >= 0 )
  {
    v6 = InstanceName;
    v7 = DeviceObject;
    FilePDO = IoWMIDeviceObjectToInstanceName(DataBlockObject, DeviceObject, v6);
    if ( FilePDO >= 0 )
      FilePDO = 0;
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return FilePDO;
}
