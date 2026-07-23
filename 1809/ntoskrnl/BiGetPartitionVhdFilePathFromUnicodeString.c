/*
 * XREFs of BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920
 * Callers:
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F2E20 (BiTranslateSymbolicLinkFile.c)
 */

ULONG *__fastcall BiGetPartitionVhdFilePathFromUnicodeString(UNICODE_STRING *a1)
{
  ULONG *v1; // rbx
  ULONG OutputBufferLength; // edi
  int i; // esi
  ULONG *OutputBuffer; // rax
  NTSTATUS v5; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int InputBuffer; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG *v11; // [rsp+C0h] [rbp+77h]

  FileHandle = 0LL;
  ObjectAttributes.ObjectName = a1;
  v1 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
  {
    OutputBufferLength = 520;
    for ( i = 1; ; i = 2 )
    {
      OutputBuffer = (ULONG *)ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
      v1 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      InputBuffer = 1;
      v5 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D5928u,
             &InputBuffer,
             4u,
             OutputBuffer,
             OutputBufferLength);
      if ( v5 != -1073741789 )
        goto LABEL_5;
      if ( i != 1 )
        goto LABEL_6;
      OutputBufferLength = *v1;
      ExFreePoolWithTag(v1, 0x4B444342u);
    }
    v5 = -1073741801;
LABEL_5:
    if ( v5 < 0 )
    {
LABEL_6:
      if ( v1 )
      {
        ExFreePoolWithTag(v1, 0x4B444342u);
        v1 = 0LL;
      }
      goto LABEL_8;
    }
    if ( (int)BiTranslateSymbolicLinkFile((PCWSTR)v1) >= 0 )
    {
      ExFreePoolWithTag(v1, 0x4B444342u);
      v1 = v11;
    }
  }
LABEL_8:
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
