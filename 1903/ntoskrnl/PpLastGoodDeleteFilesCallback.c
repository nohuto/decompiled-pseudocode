/*
 * XREFs of PpLastGoodDeleteFilesCallback @ 0x1405B4700
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopFileUtilClearAttributes @ 0x1405B47DC (IopFileUtilClearAttributes.c)
 */

NTSTATUS __fastcall PpLastGoodDeleteFilesCallback(UNICODE_STRING *a1, __int64 a2, char a3)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+20h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  IopFileUtilClearAttributes(a1);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(
             &FileHandle,
             0x10080u,
             &ObjectAttributes,
             &IoStatusBlock,
             7u,
             (a3 & 0x10) != 0 ? 2113537 : 2113600);
  if ( result >= 0 )
  {
    FileInformation = 1;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    ZwClose(FileHandle);
    return 0;
  }
  return result;
}
