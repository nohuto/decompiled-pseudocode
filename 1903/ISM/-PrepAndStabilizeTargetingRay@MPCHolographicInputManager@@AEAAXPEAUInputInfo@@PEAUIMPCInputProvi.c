/*
 * XREFs of ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180082944
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180081EA8 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegac.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180081FBC (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEA.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800820D0 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAU.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180083B0C (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 */

void __fastcall MPCHolographicInputManager::PrepAndStabilizeTargetingRay(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  const char *v9; // r9
  ISMTracing *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ISMTracing *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a2 + 20) = *((_DWORD *)a2 + 1);
  v6 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 336LL))(a3);
  *((_DWORD *)a2 + 46) = 0;
  *((_BYTE *)a2 + 92) = v6;
  *((_BYTE *)a2 + 224) = 0;
  *((_BYTE *)a2 + 152) = 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 56LL))(
    a3,
    this,
    a2);
  if ( ISMTracing::IsEnabled(v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_(v10, a2);
  }
  if ( !*((_BYTE *)a2 + 48) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1024LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v9);
    __debugbreak();
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 136LL))(a3, a2);
  if ( ISMTracing::IsEnabled(v11) )
  {
    wil::details::static_lazy<ISMTracing>::get(v12, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(v13, a2);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 328LL))(a3, a2);
  MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct InputInfo *)((char *)a2 + 124));
  if ( ISMTracing::IsEnabled(v14) )
  {
    wil::details::static_lazy<ISMTracing>::get(v15, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(v16, a2);
  }
}
