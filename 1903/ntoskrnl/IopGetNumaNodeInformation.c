/*
 * XREFs of IopGetNumaNodeInformation @ 0x140858538
 * Callers:
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x1400EC010 (IopGetDevicePDO.c)
 *     IoGetDeviceNumaNode @ 0x140787710 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall IopGetNumaNodeInformation(__int64 a1, USHORT *a2)
{
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v4; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  v4 = DevicePDO;
  if ( !DevicePDO )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(DevicePDO, &NodeNumber);
  ObfDereferenceObject(v4);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}
