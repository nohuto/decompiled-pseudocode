/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01A4354
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01396A0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3, __int64 a4)
{
  unsigned __int16 v7; // bx
  const void *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 ProfileUserName; // rbx
  unsigned int v12; // esi
  int v13; // r12d
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  _BYTE v17[24]; // [rsp+38h] [rbp-1A0h] BYREF
  wchar_t pszDest[40]; // [rsp+50h] [rbp-188h] BYREF
  wchar_t pszSrc[128]; // [rsp+A0h] [rbp-138h] BYREF

  v7 = *((_WORD *)a1 + 4);
  if ( v7 >= 0x100u )
    return 0LL;
  v9 = (const void *)*((_QWORD *)a1 + 2);
  if ( v9 )
    memmove(pszSrc, v9, v7);
  v10 = v7 & 0xFFFE;
  if ( v10 >= 0x100 )
    _report_rangecheckfailure();
  *(wchar_t *)((char *)pszSrc + v10) = 0;
  if ( a2 )
  {
    ProfileUserName = CreateProfileUserName(v17, v9, a3, a4);
    RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a1 + 1));
    v12 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", pszDest);
    *a3 = v12;
    if ( *((_QWORD *)a1 + 2) )
      v12 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", pszSrc);
    FreeProfileUserName(ProfileUserName, v17);
  }
  else
  {
    *a3 = 1;
    v12 = 0;
  }
  if ( *a3 )
  {
    v13 = gHighContrast[1];
    v14 = a2 == 0 ? 4 : 0;
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, pszSrc);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v15 = *((_DWORD *)a1 + 1);
    if ( (v15 & 0x1000) == 0 )
    {
      if ( (v15 & 1) != 0 )
        v16 = v14 | (2LL * (v13 & 1) + 8);
      else
        v16 = v14 | 9;
      PostWinlogonMessage(1026LL, v16);
    }
  }
  return v12;
}
