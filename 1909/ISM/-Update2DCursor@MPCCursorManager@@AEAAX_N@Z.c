/*
 * XREFs of ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x18008C1A4
 * Callers:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18008C21C (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x18008BEC8 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 */

void __fastcall MPCCursorManager::Update2DCursor(MPCCursorManager *this, bool a2)
{
  unsigned int (__fastcall *v2)(bool); // rax
  __int64 v3; // rcx
  signed int LastError; // eax
  bool v5; // sf
  __int64 v6; // rcx
  ISMTracing *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
  if ( v2 )
  {
    if ( !v2(a2) )
    {
      LastError = GetLastError();
      v5 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v5 = LastError < 0;
      }
      if ( v5 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          261LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          (const char *)(unsigned int)LastError);
        __debugbreak();
      }
    }
    if ( ISMTracing::IsEnabled(v3) )
    {
      wil::details::static_lazy<ISMTracing>::get(v6, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCCursorManager_Update2DCursor_(v7, &v9);
    }
  }
}
