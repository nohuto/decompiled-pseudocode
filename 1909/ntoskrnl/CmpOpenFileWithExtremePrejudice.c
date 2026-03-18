/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x14082F398
 * Callers:
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1401C13F0 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x1401C16F0 (ZwCreateFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

int __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions)
{
  int result; // eax
  NTSTATUS v10; // ebx
  HANDLE FileHandlea; // [rsp+60h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-29h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+78h] [rbp-19h] BYREF

  IoStatusBlocka.Pointer = 0LL;
  IoStatusBlocka.Information = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  *FileHandle = 0LL;
  result = ZwQueryAttributesFile(ObjectAttributes, &FileInformation);
  if ( result >= 0 )
  {
    FileInformation.FileAttributes &= ~1u;
    result = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    if ( result >= 0 )
    {
      v10 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, &FileInformation, 0x28u, FileBasicInformation);
      ZwClose(FileHandlea);
      if ( v10 >= 0 )
        return ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
      else
        return v10;
    }
  }
  return result;
}
