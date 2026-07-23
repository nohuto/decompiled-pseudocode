/*
 * XREFs of IopAssignBootDriveLetter @ 0x1409D75AC
 * Callers:
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS IopAssignBootDriveLetter()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  NTSTATUS v4[4]; // [rsp+60h] [rbp+27h] BYREF
  __int16 Object; // [rsp+70h] [rbp+37h] BYREF
  char v6; // [rsp+72h] [rbp+39h]
  int v7; // [rsp+74h] [rbp+3Bh]
  _QWORD v8[3]; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+5Fh]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    Object = 0;
    v7 = 0;
    v8[1] = v8;
    v6 = 6;
    v8[0] = v8;
    v1 = (IRP *)IopBuildDeviceIoControlRequest(
                  7192644,
                  (__int64)DeviceObject,
                  0LL,
                  0,
                  0LL,
                  0,
                  0,
                  (__int64)&Object,
                  (__int64)v4,
                  retaddr);
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
