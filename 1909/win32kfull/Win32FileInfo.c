/*
 * XREFs of Win32FileInfo @ 0x1C0120E44
 * Callers:
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C009D5C8 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ReadFileInfo @ 0x1C0120DD8 (ReadFileInfo.c)
 *     vGetFontDriverLWT @ 0x1C0142ABC (vGetFontDriverLWT.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C020E130 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C02851C8 (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

_BOOL8 __fastcall Win32FileInfo(PCWSTR SourceString, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS v6; // ebx
  void *FileHandle; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-21h] BYREF
  _QWORD FileInformation[5]; // [rsp+C8h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = IoCreateFile(
         &FileHandle,
         0x1200A9u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0x80u,
         1u,
         1u,
         0x10u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x301u);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      if ( v6 < 0 )
      {
LABEL_12:
        ZwClose(FileHandle);
        return v6 >= 0;
      }
      *a2 = FileInformation[2];
    }
    if ( a3 )
    {
      memset(FileInformation, 0, 24);
      v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v6 >= 0 )
        *a3 = FileInformation[1];
    }
    goto LABEL_12;
  }
  return 0LL;
}
