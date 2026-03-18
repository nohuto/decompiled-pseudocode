/*
 * XREFs of sub_140623A38 @ 0x140623A38
 * Callers:
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpGetSystemPdoList @ 0x140623AEC (PnpGetSystemPdoList.c)
 *     sub_140623F14 @ 0x140623F14 (sub_140623F14.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall sub_140623A38(__int64 a1)
{
  void *v2; // rbx
  NTSTATUS DeviceObjectPointer; // edi
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
    v2 = (void *)sub_140623F14(DeviceObject);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( !v2 )
      return (unsigned int)-1073741632;
    DeviceObjectPointer = PnpGetSystemPdoList(v2, a1);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)DeviceObjectPointer;
}
