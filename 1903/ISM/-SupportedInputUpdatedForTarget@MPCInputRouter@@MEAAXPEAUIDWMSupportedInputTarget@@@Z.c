/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180014600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180014950 (-SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x18005512C (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 *     ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x18007E9F0 (-OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  _DWORD *v5; // rcx
  __int64 (__fastcall *v6)(struct IDWMSupportedInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  ISMTracing *v9; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+28h] BYREF

  v10[1] = -2LL;
  DWMInputRouter::SupportedInputUpdatedForTarget(this, a2);
  if ( MPCManager::s_instance )
  {
    v12 = 0;
    v3 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, unsigned int *))(*(_QWORD *)a2 + 40LL))(a2, &v12);
    v4 = retaddr;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v3,
        v10[0]);
      __debugbreak();
    }
    if ( (v12 & 0x18040) != 0 )
    {
      v10[0] = 0LL;
      v6 = **(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v10);
      v7 = v6(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v10);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2AB,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7,
          v10[0]);
        __debugbreak();
      }
      v13 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10[0] + 32LL))(v10[0], &v13);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2AF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8,
          v10[0]);
        __debugbreak();
      }
      if ( v13 )
        MPCManager::OnGamepadIsSupportedForProcess(MPCManager::s_instance, v13);
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v10);
    }
    v5 = *(_DWORD **)(wil::details::static_lazy<ISMTracing>::get(
                        v4,
                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                    + 8);
    if ( v5 )
    {
      if ( *v5 )
      {
        wil::details::static_lazy<ISMTracing>::get(v5, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(v9, v12, (struct IUnknown *)a2);
      }
    }
  }
}
