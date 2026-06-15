/*
 * XREFs of ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180027618
 * Callers:
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180027D48 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001784 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FB8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18002759C (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 *     _alloca_probe @ 0x180038000 (_alloca_probe.c)
 *     memcpy_0 @ 0x18003806F (memcpy_0.c)
 */

__int64 __fastcall TsSessionRefreshUserSid(struct TSSession *a1)
{
  __int64 v1; // rax
  wchar_t *v3; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  DWORD *v7; // rdi
  BOOL v8; // r15d
  const char *v9; // r9
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  DWORD *p_cchReferencedDomainName; // rbx
  DWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rsp
  DWORD *v20; // rax
  char *v21; // r15
  void *v22; // rdx
  size_t LengthSid; // r12
  HANDLE ProcessHeap; // rax
  void *v25; // rax
  void *v26; // rsi
  void *v27; // rbx
  void *v28; // rdi
  HANDLE v29; // rax
  HANDLE v30; // rax
  _BYTE v31[32]; // [rsp+0h] [rbp-40h] BYREF
  LPWSTR ReferencedDomainName; // [rsp+20h] [rbp-20h]
  DWORD cchReferencedDomainName; // [rsp+40h] [rbp+0h] BYREF
  DWORD cbSid; // [rsp+44h] [rbp+4h] BYREF
  enum _SID_NAME_USE peUse; // [rsp+48h] [rbp+8h] BYREF
  char v36; // [rsp+50h] [rbp+10h] BYREF
  WCHAR v37[20]; // [rsp+58h] [rbp+18h] BYREF
  wchar_t Buffer[48]; // [rsp+80h] [rbp+40h] BYREF
  _BYTE Sid[256]; // [rsp+E0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+1D8h]

  v1 = *((_QWORD *)a1 + 5);
  v3 = (wchar_t *)(v1 + 130);
  if ( *(_WORD *)(v1 + 96) )
  {
    ReferencedDomainName = (LPWSTR)(v1 + 130);
    v4 = StringCchPrintfW(Buffer, 47LL, L"%s\\%s");
    if ( v4 < 0 )
    {
      v5 = 812LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v3 = Buffer;
  }
  if ( !*v3 )
  {
    *((_BYTE *)a1 + 324) = 1;
    ResetUserSettings(a1);
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  }
  cbSid = 256;
  cchReferencedDomainName = 17;
  v7 = (DWORD *)Sid;
  v8 = LookupAccountNameW(0LL, v3, Sid, &cbSid, v37, &cchReferencedDomainName, &peUse);
  if ( GetLastError() == 122 )
  {
    v10 = (2LL * (cchReferencedDomainName + 1) + 16) & -(__int64)(2 * (unsigned __int64)(cchReferencedDomainName + 1) < 2 * (unsigned __int64)(cchReferencedDomainName + 1) + 16);
    if ( v10 )
    {
      if ( v10 > 0x400 )
      {
        v14 = (DWORD *)malloc(v10);
        p_cchReferencedDomainName = v14;
        if ( !v14 )
          goto LABEL_18;
        *v14 = 56797;
      }
      else
      {
        v11 = v10 + 15;
        if ( v10 + 15 < v10 )
          v11 = 0xFFFFFFFFFFFFFF0LL;
        v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
        p_cchReferencedDomainName = &cchReferencedDomainName;
        if ( v31 == (_BYTE *)-64LL )
          goto LABEL_19;
        cchReferencedDomainName = 52428;
      }
      p_cchReferencedDomainName += 4;
    }
    else
    {
      p_cchReferencedDomainName = 0LL;
    }
LABEL_18:
    if ( !p_cchReferencedDomainName )
    {
LABEL_19:
      v15 = 831LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v16 = cbSid + 16LL;
    v17 = v16 & -(__int64)(cbSid < v16);
    if ( !v17 )
    {
      v7 = 0LL;
      goto LABEL_31;
    }
    if ( v17 > 0x400 )
    {
      v20 = (DWORD *)malloc(v16 & -(__int64)(cbSid < v16));
      v7 = v20;
      if ( !v20 )
      {
LABEL_31:
        if ( !v7 )
        {
LABEL_32:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x342,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          if ( *(p_cchReferencedDomainName - 4) == 56797 )
            free(p_cchReferencedDomainName - 4);
          return 2147942414LL;
        }
        v8 = LookupAccountNameW(
               0LL,
               v3,
               v7,
               &cbSid,
               (LPWSTR)p_cchReferencedDomainName,
               &cchReferencedDomainName,
               &peUse);
        if ( *(v7 - 4) == 56797 )
          free(v7 - 4);
        if ( *(p_cchReferencedDomainName - 4) == 56797 )
          free(p_cchReferencedDomainName - 4);
        goto LABEL_39;
      }
      *v20 = 56797;
    }
    else
    {
      v18 = v17 + 15;
      if ( v17 + 15 < v17 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      v7 = &cchReferencedDomainName;
      if ( v31 == (_BYTE *)-64LL )
        goto LABEL_32;
      cchReferencedDomainName = 52428;
    }
    v7 += 4;
    goto LABEL_31;
  }
LABEL_39:
  if ( !v8 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x347,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v9);
  if ( !IsValidSid(v7) )
  {
    v4 = -2147024809;
    v5 = 841LL;
    goto LABEL_4;
  }
  v21 = (char *)a1 + 328;
  v22 = (void *)*((_QWORD *)a1 + 41);
  if ( !v22 || !EqualSid(v7, v22) )
  {
    *((_BYTE *)a1 + 324) = 0;
    LengthSid = GetLengthSid(v7);
    ProcessHeap = GetProcessHeap();
    v25 = HeapAlloc(ProcessHeap, 0, (unsigned int)LengthSid);
    v26 = v25;
    if ( v25 )
      memset_0(v25, 0, (unsigned int)LengthSid);
    else
      v26 = 0LL;
    v27 = v26;
    if ( !v26 )
    {
      v15 = 850LL;
      goto LABEL_20;
    }
    memcpy_0(v26, v7, LengthSid);
    if ( v21 != &v36 )
    {
      v28 = *(void **)v21;
      v27 = 0LL;
      *(_QWORD *)v21 = v26;
      if ( !v28 )
        return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
      v29 = GetProcessHeap();
      HeapFree(v29, 0, v28);
      v26 = 0LL;
    }
    if ( v26 )
    {
      v30 = GetProcessHeap();
      HeapFree(v30, 0, v27);
    }
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  }
  *((_BYTE *)a1 + 324) = 1;
  return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
}
