/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180115060
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     StringCbPrintfW @ 0x1800889D0 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0DA0 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x1801151BC (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v7; // [rsp+70h] [rbp-90h]
  __int64 v8; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(RtlpUserPolicies) )
  {
    DiskSpacePolicyByHandle = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v6 = 0LL;
    v7 = 0LL;
    if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v8) >= 0 )
    {
      LOWORD(v6) = 2 * v8;
      WORD1(v6) = 2 * v8 + 2;
      v7 = pszDest;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = ZwCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0LL,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
