/*
 * XREFs of sub_1406A3BA4 @ 0x1406A3BA4
 * Callers:
 *     sub_140622710 @ 0x140622710 (sub_140622710.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     sub_14069C7F8 @ 0x14069C7F8 (sub_14069C7F8.c)
 *     PnpGetSystemPdoList @ 0x1406A3AC8 (PnpGetSystemPdoList.c)
 */

__int64 __fastcall sub_1406A3BA4(_QWORD *a1)
{
  PDEVICE_OBJECT v2; // rbx
  int DeviceObjectPointer; // edi
  UNICODE_STRING ObjectName; // [rsp+20h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectName.Length = 0LL;
  ObjectName.Buffer = 0LL;
  v2 = 0LL;
  RtlInitUnicodeString(&ObjectName, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
    v2 = sub_14069C7F8(DeviceObject);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( !v2 )
      return (unsigned int)-1073741632;
    DeviceObjectPointer = PnpGetSystemPdoList((__int64)v2, a1);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)DeviceObjectPointer;
}
