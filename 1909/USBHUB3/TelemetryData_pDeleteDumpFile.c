/*
 * XREFs of TelemetryData_pDeleteDumpFile @ 0x1C0082D80
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00833C4 (TelemetryData_SubmitReport.c)
 * Callees:
 *     memset @ 0x1C0041640 (memset.c)
 */

NTSTATUS __fastcall TelemetryData_pDeleteDumpFile(__int64 a1)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 720));
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = IoCreateFile(
             &FileHandle,
             0x110000u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             7u,
             1u,
             0x1000u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
  if ( result >= 0 )
  {
    result = ZwClose(FileHandle);
    *(_WORD *)(a1 + 720) = 0;
  }
  return result;
}
