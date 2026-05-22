/*
 * XREFs of _lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_ @ 0x1800EE110
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_(_BYTE *a1, HKEY a2)
{
  LSTATUS v3; // eax
  __int64 v4; // rcx
  char v5; // al
  unsigned int v6; // eax
  const char *v7; // r9
  const char *v8; // r9
  const char *v9; // r9
  int v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  DWORD v15; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0;
  v15 = 4;
  v3 = RegQueryValueExW(a2, L"EnableMouseAsTouch", 0LL, &v13, (LPBYTE)&v14, &v15);
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = (unsigned int)v3;
  v5 = (int)v4 >= 0 && v13 == 4 && v14 == 1;
  if ( v5 != a1[96] )
  {
    a1[96] = v5;
    if ( v5 )
    {
      if ( a1[1096] )
      {
        v7 = 0LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(**((_QWORD **)a1 + 13) + 40LL))(
               *((_QWORD *)a1 + 13),
               a1 + 112,
               0LL);
        v7 = (const char *)v6;
        a1[1096] = (v6 & 0x80000000) == 0;
      }
      if ( (int)v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v7);
        __debugbreak();
      }
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x19F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v8);
        __debugbreak();
      }
    }
    else
    {
      if ( !(unsigned int)MITDisableMouseIntercept(v4) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x1A3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v9);
        __debugbreak();
      }
      if ( a1[1096] )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a1 + 13) + 56LL))(
                *((_QWORD *)a1 + 13),
                a1 + 112);
        v11 = (const char *)(unsigned int)v10;
        a1[1096] = v10 < 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( (int)v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v11);
        JUMPOUT(0x1800EE278LL);
      }
    }
  }
}
