/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003D870
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x180040E9C (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001AA8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800023E0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800032F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003EF90 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x180042370 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, char *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  void *v12; // rax
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  void *v15; // rbx
  HANDLE FileW; // rax
  wil::details *v17; // rcx
  char *v18; // r14
  void *v19; // rsi
  DWORD LastError; // ebx
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // rax
  void *v26; // rdx
  void *v27; // rbx
  unsigned int v28; // eax
  DWORD nFileSizeLow; // edx
  int v30; // eax
  DWORD NumberOfBytesRead; // [rsp+48h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+50h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 225LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = a2;
  v8 = 0x7FFFFFFFLL;
  do
  {
    if ( !*(_WORD *)v7 )
      break;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v4 = v8 == 0 ? 0x80070057 : 0;
  if ( v8 )
    v9 = 0x7FFFFFFF - v8;
  else
    v9 = 0LL;
  if ( !v8 )
  {
    v5 = 227LL;
    goto LABEL_3;
  }
  v10 = v9 + 1;
  v11 = 2 * (v9 + 1);
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v14 = (void *)*((_QWORD *)this + 2);
  v15 = v12;
  if ( v12 != v14 )
  {
    operator delete(v14, v13);
    v14 = v15;
    *((_QWORD *)this + 2) = v15;
  }
  if ( !v14 )
  {
    v4 = -2147024882;
    v5 = 230LL;
    goto LABEL_3;
  }
  v4 = StringCchCopyW((char *)v14, v10, a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = 232LL;
    goto LABEL_3;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v18 = (char *)*((_QWORD *)this + 3);
  v19 = FileW;
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v18);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 3) = v19;
  if ( v19 == (void *)-1LL )
    return wil::details::GetLastErrorFailHr(v17);
  if ( !GetFileInformationByHandle(v19, &FileInformation) )
  {
    v22 = 238LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v23 = 241LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v22 = 243LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v23 = 244LL;
    goto LABEL_29;
  }
  v24 = *((_DWORD *)this + 9);
  if ( !v24 )
  {
    v23 = 248LL;
    goto LABEL_29;
  }
  if ( v24 == 1 )
  {
    if ( *((_DWORD *)this + 8) != 24 )
    {
      v23 = 251LL;
      goto LABEL_29;
    }
  }
  else
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    {
      v22 = 257LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v22,
               (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v21);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v23 = 258LL;
      goto LABEL_29;
    }
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v22 = 262LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v22,
                 (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                 v21);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v23 = 263LL;
        goto LABEL_29;
      }
      if ( *((_DWORD *)this + 9) >= 4u )
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
        {
          v22 = 267LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v22,
                   (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v21);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v23 = 268LL;
          goto LABEL_29;
        }
        if ( *((_DWORD *)this + 9) >= 5u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
          {
            v22 = 272LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v22,
                     (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v21);
          }
          if ( NumberOfBytesRead != 4 )
          {
            v23 = 273LL;
            goto LABEL_29;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v23 = 279LL;
    goto LABEL_29;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v23 = 280LL;
    goto LABEL_29;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 283LL;
    goto LABEL_3;
  }
  v25 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v26 = (void *)*((_QWORD *)this + 93);
  v27 = v25;
  if ( v25 != v26 )
  {
    if ( v26 )
      operator delete(*((void **)this + 93), (unsigned __int64)v26);
    *((_QWORD *)this + 93) = v27;
    v26 = v27;
  }
  if ( !v26 )
  {
    v4 = -2147024882;
    v5 = 286LL;
    goto LABEL_3;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v26, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
  {
    v22 = 289LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  v28 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v28 )
  {
    v23 = 290LL;
    goto LABEL_29;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *((_DWORD *)this + 200) = v28 / *((_DWORD *)this + 13);
  v30 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
  v4 = v30;
  if ( v30 == -2147024809 )
    return 2147942487LL;
  if ( v30 < 0 )
  {
    v5 = 296LL;
    goto LABEL_3;
  }
  return 0LL;
}
