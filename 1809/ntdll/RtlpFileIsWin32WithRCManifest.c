/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x18003451C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x1800347B0 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180034930 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A0D80 (ZwCreateFile.c)
 */

bool __fastcall RtlpFileIsWin32WithRCManifest(__int64 a1)
{
  bool v1; // di
  char v2; // si
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // ebx
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v10[2]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp-80h] BYREF
  int v13; // [rsp+90h] [rbp-78h] BYREF
  __int64 v14; // [rsp+98h] [rbp-70h]
  unsigned int *v15; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v17; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-40h]
  int v19; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-28h]
  __int128 *v21; // [rsp+E8h] [rbp-20h]
  int v22; // [rsp+F0h] [rbp-18h]
  __int128 v23; // [rsp+F8h] [rbp-10h]
  _BYTE v24[16]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v25[3]; // [rsp+118h] [rbp+10h] BYREF

  v10[0] = 0LL;
  v9 = 0LL;
  v1 = 0;
  v12 = 0LL;
  v2 = 0;
  if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(a1, &v16, 0LL, &v17) )
  {
    v3 = *((_QWORD *)&v16 + 1);
    if ( (_WORD)v17 )
    {
      v4 = v18;
      v16 = v17;
    }
    else
    {
      v4 = 0LL;
      v18 = 0LL;
    }
    v19 = 48;
    v22 = 64;
    v20 = v4 & -(__int64)(v3 != 0);
    v21 = &v16;
    v23 = 0LL;
    v5 = ZwCreateFile(v10, 2148532352LL, &v19, v24, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName(&v17);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL, 0LL, 2, 0x8000000, v10[0]) >= 0 )
      {
        v10[1] = 0LL;
        v14 = 0LL;
        v9 = 0LL;
        v6 = ZwMapViewOfSection(Handle, -1LL, &v9);
        NtClose(Handle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(v9) )
          {
            v25[0] = L"MUI";
            v25[1] = 1LL;
            v7 = v9 | 1;
            v25[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U((unsigned int)v9 | 1, (unsigned int)v25, 3, 48, (__int64)&v15) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, v15, (unsigned __int64 *)&v12, &v13) >= 0 )
            {
              v1 = *v12 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( v9 )
    NtUnmapViewOfSection(-1LL);
  if ( v2 )
    NtClose(v10[0]);
  return v1;
}
