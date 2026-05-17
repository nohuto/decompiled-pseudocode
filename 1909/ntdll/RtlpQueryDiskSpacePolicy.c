/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180114458
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000283C (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW @ 0x180003214 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwCreateFile @ 0x18009D930 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x1801145B4 (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  int File; // ebx
  __int64 v5; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v6; // [rsp+70h] [rbp-90h]
  __int64 v7; // [rsp+78h] [rbp-88h] BYREF
  int v8; // [rsp+80h] [rbp-80h]
  __int64 v9; // [rsp+88h] [rbp-78h]
  __int64 *v10; // [rsp+90h] [rbp-70h]
  int v11; // [rsp+98h] [rbp-68h]
  __int128 v12; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  if ( BYTE2(RtlpUserPolicies) )
  {
    File = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v5 = 0LL;
    v6 = 0LL;
    if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v7) >= 0 )
    {
      LOWORD(v5) = 2 * v7;
      WORD1(v5) = 2 * v7 + 2;
      v6 = pszDest;
    }
    v8 = 48;
    v9 = 0LL;
    v11 = 64;
    v10 = &v5;
    v12 = 0LL;
    File = ZwCreateFile();
    if ( File >= 0 )
    {
      File = RtlpQueryDiskSpacePolicyByHandle(0LL, a2);
      if ( File >= 0 )
        return 0;
    }
  }
  return (unsigned int)File;
}
