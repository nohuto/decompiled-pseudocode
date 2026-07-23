/*
 * XREFs of ExpGetSystemWriteConstraintInformation @ 0x140763070
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 */

__int64 __fastcall ExpGetSystemWriteConstraintInformation(_QWORD *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES v6; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-48h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+10h] BYREF
  HANDLE EventHandle; // [rsp+110h] [rbp+18h] BYREF
  __int64 OutputBuffer; // [rsp+118h] [rbp+20h] BYREF

  FileHandle = 0LL;
  EventHandle = 0LL;
  v6.Length = 48;
  v6.RootDirectory = 0LL;
  v6.ObjectName = (PUNICODE_STRING)L"*,";
  v6.Attributes = 576;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  OutputBuffer = 0LL;
  v2 = ZwCreateFile(&FileHandle, 0x100000u, &v6, &IoStatusBlock, 0LL, 0x80u, 0, 1u, 0x20u, 0LL, 0);
  Status = v2;
  if ( v2 == -1073741772 )
  {
    Status = 0;
  }
  else if ( v2 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
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
