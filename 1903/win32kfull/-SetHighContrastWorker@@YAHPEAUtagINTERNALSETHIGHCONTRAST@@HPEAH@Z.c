/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9A04
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0162AF0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3)
{
  unsigned __int16 v6; // si
  const void *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 ProfileUserName; // r15
  unsigned int v11; // esi
  int v12; // r15d
  int v13; // eax
  unsigned __int64 v14; // rdx
  _QWORD v15[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t Dest[40]; // [rsp+50h] [rbp-188h] BYREF
  char v17[256]; // [rsp+A0h] [rbp-138h] BYREF

  v6 = *((_WORD *)a1 + 4);
  if ( v6 >= 0x100u )
    return 0LL;
  v8 = (const void *)*((_QWORD *)a1 + 2);
  if ( v8 )
    memmove(v17, v8, v6);
  v9 = v6 & 0xFFFE;
  if ( v9 >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v17[v9] = 0;
  if ( a2 )
  {
    memset(v15, 0, 24);
    ProfileUserName = CreateProfileUserName(v15);
    RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a1 + 1));
    v11 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", Dest);
    *a3 = v11;
    if ( *((_QWORD *)a1 + 2) )
      v11 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", v17);
    FreeProfileUserName(ProfileUserName, v15);
  }
  else
  {
    *a3 = 1;
    v11 = 0;
  }
  if ( *a3 )
  {
    v12 = gHighContrast[1];
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)gHighContrastDefaultScheme, 128LL, v17);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v13 = *((_DWORD *)a1 + 1);
    if ( (v13 & 0x1000) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( (v12 & 1) != 0 )
          v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v14);
    }
  }
  return v11;
}
