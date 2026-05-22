/*
 * XREFs of _lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator() @ 0x18002E200
 * Callers:
 *     wil::init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___ @ 0x18002E158 (wil--init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator()(__int64 a1)
{
  int ValueW; // eax
  bool v2; // sf
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = HIDWORD(a1);
  v6 = 0;
  v8 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
             L"ClassicAppsEnabled",
             0x20000018u,
             0LL,
             &v6,
             &v8);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW < -2147024894 )
  {
    v2 = ValueW < 0;
  }
  else
  {
    if ( ValueW <= -2147024893 || ValueW == -2147023728 )
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = 1;
      return 0LL;
    }
    v2 = ValueW < 0;
    if ( !ValueW )
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = v6 == 1;
      return 0LL;
    }
  }
  if ( v2 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"internal\\onecoreuapshell\\inc\\win32slatesfeature.h",
      (const char *)(unsigned int)ValueW,
      v4);
  return 0LL;
}
