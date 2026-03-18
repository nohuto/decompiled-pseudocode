/*
 * XREFs of ?DxgkpQueryGraphicsPartitionAvailability@@YA?AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ @ 0x1C0242068
 * Callers:
 *     ?AllowGraphicsPartitionUse@DXGGLOBAL@@QEAA?AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ @ 0x1C024158C (-AllowGraphicsPartitionUse@DXGGLOBAL@@QEAA-AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 DxgkpQueryGraphicsPartitionAvailability()
{
  void *FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-9h] BYREF

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  wcscpy(SourceString, L"\\GLOBAL??\\N:\\enable_gpu_partition");
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 1u, 0x60u) < 0 )
    return 0LL;
  ZwClose(FileHandle);
  return 1LL;
}
