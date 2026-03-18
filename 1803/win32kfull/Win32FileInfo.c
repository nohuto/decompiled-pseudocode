/*
 * XREFs of Win32FileInfo @ 0x1C00BF334
 * Callers:
 *     vGetFontDriverLWT @ 0x1C00567A4 (vGetFontDriverLWT.c)
 *     ComputeFNTCacheFastCheckSum @ 0x1C00BF260 (ComputeFNTCacheFastCheckSum.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C01D3748 (-IsWin32kRefreshed@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall Win32FileInfo(PCWSTR SourceString, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  void *FileHandle; // [rsp+70h] [rbp-49h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-21h] BYREF
  _BYTE FileInformation[8]; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+D0h] [rbp+17h]
  __int64 v13; // [rsp+D8h] [rbp+1Fh]

  FileHandle = 0LL;
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
  v5 = IoCreateFile(
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
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      if ( v5 < 0 )
      {
LABEL_12:
        ZwClose(FileHandle);
        return v5 >= 0;
      }
      *a2 = v13;
    }
    if ( a3 )
    {
      v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v5 >= 0 )
        *a3 = v12;
    }
    goto LABEL_12;
  }
  return 0LL;
}
