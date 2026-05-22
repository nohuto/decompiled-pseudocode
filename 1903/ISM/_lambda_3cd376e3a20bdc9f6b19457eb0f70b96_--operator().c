/*
 * XREFs of _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x180133F14
 * Callers:
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180136984 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 */

bool __fastcall lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator()(__int64 a1)
{
  const char *v2; // r9
  char v3; // bl
  struct BamoMPCConstantManagerClientPrincipal *v4; // rsi
  float v5; // xmm6_4
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 590) == 512 )
  {
    v4 = MPCConstantManager::s_instance;
    v5 = *(float *)(**(_QWORD **)(a1 + 8) + 840LL);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v2);
      __debugbreak();
    }
    v6 = (*(_QWORD *)a1 + 24LL) & -(__int64)(*(_QWORD *)a1 != 0LL);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    return v5 >= MPCConstantManager::GetStaticConstant<float>((__int64)v4, v7, L"HandGuidanceScoreForPrimary").m128_f32[0];
  }
  return v3;
}
