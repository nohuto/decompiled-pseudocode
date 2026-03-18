/*
 * XREFs of BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x140006CA0
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     memset_0 @ 0x1400040EC (memset_0.c)
 *     memmove_0 @ 0x140004A73 (memmove_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000593C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140006928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x140006964 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140006A4C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x140006ADC (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1400083C4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::GetCurrentProcessVersionInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  _WORD *v5; // rdi
  HANDLE CurrentProcess; // rax
  __int64 v7; // r8
  DWORD v8; // eax
  __int64 v9; // rcx
  const WCHAR *v10; // rcx
  DWORD FileVersionInfoSizeW; // eax
  DWORD v12; // eax
  __int64 v13; // rcx
  const void *v14; // rdi
  const WCHAR *v15; // rcx
  DWORD LastError; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char *v22; // rdi
  __int64 v23; // rbx
  int v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D0h]
  DWORD dwSize; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int puLen; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID lpData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h]
  LPCWSTR lptstrFilename[3]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-80h]
  wchar_t Src[28]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR ExeName[264]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a1[3];
  if ( v3 < 7 )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
      (__int64)a1,
      7uLL,
      a3,
      L"Unknown");
  }
  else
  {
    v5 = a1;
    if ( v3 >= 8 )
      v5 = (_WORD *)*a1;
    a1[2] = 7LL;
    memmove_0(v5, L"Unknown", 0xEuLL);
    v5[7] = 0;
  }
  dwSize = 260;
  memset_0(ExeName, 0, 0x208uLL);
  CurrentProcess = GetCurrentProcess();
  if ( QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, &dwSize) )
  {
    std::wstring::wstring((char *)lptstrFilename, ExeName, v7);
    v10 = (const WCHAR *)lptstrFilename;
    if ( v33 >= 8 )
      v10 = lptstrFilename[0];
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(v10, 0LL);
    if ( FileVersionInfoSizeW )
    {
      std::vector<unsigned char>::vector<unsigned char>((__int64)&lpData, FileVersionInfoSizeW);
      v14 = lpData;
      v15 = (const WCHAR *)lptstrFilename;
      if ( v33 >= 8 )
        v15 = lptstrFilename[0];
      if ( GetFileVersionInfoW(v15, 0, v31 - (_DWORD)lpData, lpData) )
      {
        lpBuffer = 0LL;
        puLen = 0;
        if ( VerQueryValueW(v14, L"\\", &lpBuffer, &puLen) )
        {
          memset_0(Src, 0, 0x32uLL);
          v26 = *((unsigned __int16 *)lpBuffer + 6);
          v25 = *((unsigned __int16 *)lpBuffer + 7);
          v24 = *((unsigned __int16 *)lpBuffer + 4);
          StringCchPrintfW(Src, 25LL, L"%hu.%hu.%hu.%hu", *((unsigned __int16 *)lpBuffer + 5), v24, v25, v26);
          v20 = -1LL;
          do
            ++v20;
          while ( Src[v20] );
          v21 = a1[3];
          if ( v20 > v21 )
          {
            std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
              (__int64)a1,
              v20,
              v19,
              Src);
          }
          else
          {
            v22 = (char *)a1;
            if ( v21 >= 8 )
              v22 = (char *)*a1;
            a1[2] = v20;
            v23 = 2 * v20;
            memmove_0(v22, Src, 2 * v20);
            *(_WORD *)&v22[v23] = 0;
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgs(v18, 0LL, 0LL);
        }
      }
      else
      {
        LastError = GetLastError();
        MicrosoftTelemetryAssertTriggeredArgs(v17, LastError, 0LL);
      }
      std::vector<unsigned char>::_Tidy(&lpData);
    }
    else
    {
      v12 = GetLastError();
      MicrosoftTelemetryAssertTriggeredArgs(v13, v12, 0LL);
    }
    if ( v33 >= 8 )
      std::_Deallocate<16,0>((char *)lptstrFilename[0], 2 * v33 + 2);
  }
  else
  {
    v8 = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v9, v8, 0LL);
  }
}
