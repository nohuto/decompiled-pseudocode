/*
 * XREFs of RtlpGetVolumeHandle @ 0x1800461A8
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180046090 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18007FD30 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180004850 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, void **a2)
{
  __int64 v2; // r9
  wchar_t *v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // ax
  NTSTATUS result; // eax
  void *FileHandle; // [rsp+60h] [rbp-29h] BYREF
  __int64 v9; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v10; // [rsp+70h] [rbp-19h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v4 = pszDest;
  v9 = 0LL;
  v10 = 0LL;
  v5 = 0x7FFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    v6 = 0x7FFF - v5;
  else
    v6 = 0;
  if ( v5 )
  {
    LOWORD(v9) = 2 * v6;
    WORD1(v9) = 2 * v6 + 2;
    v10 = pszDest;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
