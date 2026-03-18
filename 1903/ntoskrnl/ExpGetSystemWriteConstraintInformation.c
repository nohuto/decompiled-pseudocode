/*
 * XREFs of ExpGetSystemWriteConstraintInformation @ 0x14078879C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401C09D0 (ZwCreateEvent.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExpGetSystemWriteConstraintInformation(_QWORD *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES v7; // [rsp+B0h] [rbp-48h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+10h] BYREF
  HANDLE EventHandle; // [rsp+110h] [rbp+18h] BYREF
  __int64 OutputBuffer; // [rsp+118h] [rbp+20h] BYREF

  FileHandle = 0LL;
  EventHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"*,";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(&v7, 0, sizeof(v7));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  OutputBuffer = 0LL;
  v2 = ZwCreateFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 1u, 0x20u, 0LL, 0);
  Status = v2;
  if ( v2 == -1073741772 )
  {
    Status = 0;
  }
  else if ( v2 >= 0 )
  {
    v7.Length = 48;
    v7.RootDirectory = 0LL;
    v7.Attributes = 576;
    v7.ObjectName = 0LL;
    *(_OWORD *)&v7.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &v7, SynchronizationEvent, 0);
    if ( Status >= 0 )
    {
      Status = ZwDeviceIoControlFile(
                 FileHandle,
                 EventHandle,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 0x220A0Cu,
                 0LL,
                 0,
                 &OutputBuffer,
                 8u);
      if ( Status >= 0 )
        Status = IoStatusBlock.Status;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( EventHandle )
    ZwClose(EventHandle);
  *a1 = OutputBuffer;
  return (unsigned int)Status;
}
