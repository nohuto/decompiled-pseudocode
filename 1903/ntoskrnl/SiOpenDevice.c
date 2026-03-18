/*
 * XREFs of SiOpenDevice @ 0x1405B2034
 * Callers:
 *     SiGetDiskPartitionInformation @ 0x1406D36BC (SiGetDiskPartitionInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14072A96C (SiGetDriveLayoutInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140932C2C (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140932D08 (SiIssueSynchronousIoctl.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
