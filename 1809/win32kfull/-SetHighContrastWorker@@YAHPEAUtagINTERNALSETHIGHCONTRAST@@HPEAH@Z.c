/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C6654
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C015AFA0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3, __int64 a4)
{
  unsigned __int16 v7; // si
  const void *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 ProfileUserName; // r15
  unsigned int v12; // esi
  int v13; // r15d
  int v14; // eax
  unsigned __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+38h] [rbp-1A0h] BYREF
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
    ProfileUserName = CreateProfileUserName(v16, v9, a3, a4);
    RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a1 + 1));
    v12 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", pszDest);
    *a3 = v12;
    if ( *((_QWORD *)a1 + 2) )
      v12 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", pszSrc);
    FreeProfileUserName(ProfileUserName, v16);
  }
  else
  {
    *a3 = 1;
    v12 = 0;
  }
  if ( *a3 )
  {
    v13 = gHighContrast[1];
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, pszSrc);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v14 = *((_DWORD *)a1 + 1);
    if ( (v14 & 0x1000) == 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        if ( (v13 & 1) != 0 )
          v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v15);
    }
  }
  return v12;
}
