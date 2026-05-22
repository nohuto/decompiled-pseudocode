/*
 * XREFs of ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18012BA48
 * Callers:
 *     _lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_ @ 0x18012B350 (_lambda_f2fdab03bc5b02d353eab8edcf2c7195_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180075334 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076D50 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall MouseProcessor::UpdateMouseAsTouchMode(MouseProcessor *this, HKEY a2)
{
  LSTATUS v3; // eax
  __int64 v4; // rcx
  bool v5; // sf
  char v6; // al
  int v7; // eax
  const char *v8; // r9
  const char *v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  DWORD v14; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = 4;
  v3 = RegQueryValueExW(a2, L"EnableMouseAsTouch", 0LL, &v12, (LPBYTE)&v13, &v14);
  v5 = v3 < 0;
  if ( v3 > 0 )
    v5 = 1;
  v6 = !v5 && v12 == 4 && v13 == 1;
  if ( v6 != *((_BYTE *)this + 120) )
  {
    *((_BYTE *)this + 120) = v6;
    if ( v6 )
    {
      v7 = InjectionDevice::Attach((MouseProcessor *)((char *)this + 128));
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          443LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x1BC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v8);
        __debugbreak();
      }
    }
    else
    {
      if ( !(unsigned int)NtMITDisableMouseIntercept(v4) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x1C0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v9);
        __debugbreak();
      }
      v10 = InjectionDevice::Remove((MouseProcessor *)((char *)this + 128));
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          449LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
  }
}
