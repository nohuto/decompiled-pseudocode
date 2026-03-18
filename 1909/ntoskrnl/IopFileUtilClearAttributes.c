/*
 * XREFs of IopFileUtilClearAttributes @ 0x1405B4BBC
 * Callers:
 *     PpLastGoodDeleteFilesCallback @ 0x1405B4AE0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilRename @ 0x140A1D96C (IopFileUtilRename.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C0E70 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall IopFileUtilClearAttributes(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  unsigned int v4; // edi
  HANDLE FileHandle; // [rsp+38h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _DWORD FileInformation[10]; // [rsp+80h] [rbp+1Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100180u, &ObjectAttributes, &IoStatusBlock, 3u, 0x204022u);
  if ( result >= 0 )
  {
    v3 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    if ( v3 >= 0 && (FileInformation[8] & 7) != 0 )
    {
      v4 = FileInformation[8] & 0xFFFFFFF8;
      if ( (FileInformation[8] & 0xFFFFFFF8) == 0 )
        v4 = 128;
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = v4;
      v3 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    }
    ZwClose(FileHandle);
    return v3;
  }
  return result;
}
