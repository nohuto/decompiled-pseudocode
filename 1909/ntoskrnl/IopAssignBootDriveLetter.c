/*
 * XREFs of IopAssignBootDriveLetter @ 0x1409F594C
 * Callers:
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS IopAssignBootDriveLetter()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v4[2]; // [rsp+60h] [rbp+27h] BYREF
  __int16 Object; // [rsp+70h] [rbp+37h] BYREF
  char v6; // [rsp+72h] [rbp+39h]
  char v7; // [rsp+73h] [rbp+3Ah]
  int v8; // [rsp+74h] [rbp+3Bh]
  _QWORD v9[3]; // [rsp+78h] [rbp+3Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v7 = 0;
  v4[0] = 0LL;
  v4[1] = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    Object = 0;
    v8 = 0;
    v9[1] = v9;
    v6 = 6;
    v9[0] = v9;
    v1 = (IRP *)IopBuildDeviceIoControlRequest(
                  7192644,
                  (int)DeviceObject,
                  0LL,
                  0,
                  0LL,
                  0,
                  0,
                  (__int64)&Object,
                  (__int64)v4);
    if ( v1 )
    {
      v2 = IofCallDriver(DeviceObject, v1);
      if ( v2 == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v2 = v4[0];
      }
    }
    else
    {
      v2 = -1073741670;
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    return v2;
  }
  return result;
}
