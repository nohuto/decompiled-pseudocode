/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18007FB08
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180042A80 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180004850 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     NtClose_0 @ 0x18004823C (NtClose_0.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18007FC7C (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  wchar_t *v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // ax
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v10; // [rsp+70h] [rbp-90h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
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
    DiskSpacePolicyByHandle = NtCreateFile(
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
      NtClose_0(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
