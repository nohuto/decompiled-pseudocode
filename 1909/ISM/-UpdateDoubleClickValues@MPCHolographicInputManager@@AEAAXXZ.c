/*
 * XREFs of ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800217C0
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180021520 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180084110 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007B868 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180082478 (-MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateDoubleClickValues(MPCHolographicInputManager *this)
{
  _QWORD *v2; // rcx
  char v3; // di
  UINT v4; // edx
  UINT v5; // eax
  int SystemMetrics; // eax
  const char *v7; // r9
  __int64 v8; // rcx
  const char *v9; // r9
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT v13; // [rsp+38h] [rbp+10h] BYREF
  UINT uiParam; // [rsp+40h] [rbp+18h] BYREF

  if ( IsEdition(10LL) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 322);
    if ( v2 == *((_QWORD **)this + 323)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2) == 2
      || (v3 = 1, *((_DWORD *)this + 656) != 1) )
    {
      v3 = 0;
    }
    if ( v3 != *((_BYTE *)this + 2648) )
    {
      if ( v3 )
        v4 = *((_DWORD *)this + 665);
      else
        v4 = *((_DWORD *)this + 663);
      uiParam = v4;
      if ( v3 )
        v5 = *((_DWORD *)this + 666);
      else
        v5 = *((_DWORD *)this + 664);
      v13 = v5;
      if ( v3 )
      {
        *((_DWORD *)this + 663) = GetSystemMetrics(36);
        SystemMetrics = GetSystemMetrics(37);
        v4 = uiParam;
        *((_DWORD *)this + 664) = SystemMetrics;
      }
      if ( !SystemParametersInfoW(0x1Du, v4, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x599,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v7);
      if ( !SystemParametersInfoW(0x1Eu, v13, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x59A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
      *((_BYTE *)this + 2648) = v3;
      if ( ISMTracing::IsEnabled(v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v10,
          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
          v11,
          (const bool *)this + 2648,
          (const int *)&uiParam,
          (const int *)&v13);
      }
    }
  }
}
