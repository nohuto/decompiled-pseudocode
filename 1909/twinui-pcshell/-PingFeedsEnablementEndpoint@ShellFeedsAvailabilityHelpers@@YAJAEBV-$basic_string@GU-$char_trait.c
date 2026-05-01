/*
 * XREFs of ?PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAE@Z @ 0x1800D2ACC
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800D2FFC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     _alloca_probe @ 0x1800D3E70 (_alloca_probe.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint(const WCHAR *a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v6; // rax
  void *v7; // rax
  void *v8; // rbx
  void *v9; // rax
  void *v10; // r15
  int i; // esi
  BOOL v12; // r12d
  signed int LastError; // eax
  DWORD dwNumberOfBytesRead; // [rsp+30h] [rbp-1058h] BYREF
  int Buffer; // [rsp+34h] [rbp-1054h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp-1050h] BYREF
  void *v18; // [rsp+40h] [rbp-1048h]
  __int64 v19; // [rsp+48h] [rbp-1040h]
  _BYTE v20[4096]; // [rsp+50h] [rbp-1038h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1088h] [rbp+0h]

  v19 = -2LL;
  *a3 = 0;
  v6 = a2;
  if ( a2[3] >= 0x10uLL )
    v6 = (_BYTE *)*a2;
  a2[2] = 0LL;
  *v6 = 0;
  Buffer = 0;
  dwBufferLength = 4;
  v7 = InternetOpenW(&szAgent, 0, 0LL, 0LL, 0);
  v8 = v7;
  v18 = v7;
  if ( v7 )
  {
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      a1 = *(const WCHAR **)a1;
    v9 = InternetOpenUrlW(v7, a1, 0LL, 0, 0, 0LL);
    v10 = v9;
    if ( v9 && HttpQueryInfoW(v9, 0x20000013u, &Buffer, &dwBufferLength, 0LL) && Buffer == 200 )
    {
      for ( i = 0; ; i += dwNumberOfBytesRead )
      {
        dwNumberOfBytesRead = 0;
        v12 = InternetReadFile(v10, v20, 0x1000u, &dwNumberOfBytesRead);
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( !v12 || !dwNumberOfBytesRead )
          break;
        std::string::append(a2);
      }
      if ( LastError < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x171,
          (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
          (const char *)(unsigned int)LastError);
        *a3 = 1;
      }
    }
    else
    {
      *a3 = 1;
    }
    InternetCloseHandle(v8);
  }
  else
  {
    *a3 = 1;
  }
  return 1LL;
}
