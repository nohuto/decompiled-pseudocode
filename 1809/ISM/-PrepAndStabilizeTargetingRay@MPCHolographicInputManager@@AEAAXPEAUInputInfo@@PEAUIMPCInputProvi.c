/*
 * XREFs of ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18004258C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180042018 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800445DC (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegac.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800446F8 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEA.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180044814 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::PrepAndStabilizeTargetingRay(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3)
{
  int v3; // eax
  _DWORD *v7; // rcx
  const char *v8; // r9
  ISMTracing *v9; // rcx
  _DWORD *v10; // rcx
  ISMTracing *v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 158) = 0;
  *((_DWORD *)a2 + 134) = v3;
  *((_BYTE *)a2 + 672) = 0;
  *((_BYTE *)a2 + 600) = 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 56LL))(
    a3,
    this,
    a2);
  v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v7 && *v7 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_(v9, a2);
  }
  if ( !*((_BYTE *)a2 + 500) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3E8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v8);
    JUMPOUT(0x1800426A6LL);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 144LL))(a3, a2);
  v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v10 && *v10 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(v11, a2);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 344LL))(a3, a2);
  MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct InputInfo *)((char *)a2 + 540), v12, v13);
  v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v14 )
  {
    if ( *v14 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(v15, a2);
    }
  }
}
