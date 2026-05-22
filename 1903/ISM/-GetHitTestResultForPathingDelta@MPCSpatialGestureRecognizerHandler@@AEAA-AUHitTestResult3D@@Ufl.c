/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800903E4
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180090750 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800908F0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180080EF0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180083B0C (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  struct IMPCInputPostProcessor *v12; // rbx
  int v13; // eax
  __int64 v15[2]; // [rsp+28h] [rbp-29h] BYREF
  _DWORD v16[11]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v17; // [rsp+64h] [rbp+13h] BYREF
  int v18; // [rsp+74h] [rbp+23h]
  int v19; // [rsp+78h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15[1] = -2LL;
  memset_0(v16, 0, 0x44uLL);
  memset_0(a2, 0, 0x148uLL);
  v16[0] = *(_DWORD *)(a1 + 8);
  v17 = *(_OWORD *)(a1 + 136);
  v18 = *(_DWORD *)(a1 + 152);
  v19 = *(_DWORD *)(a1 + 156);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v17);
  *(float *)&v17 = *(float *)&v17 + *a3;
  *((float *)&v17 + 1) = *((float *)&v17 + 1) + a3[1];
  *((float *)&v17 + 2) = *((float *)&v17 + 2) + a3[2];
  v7 = MPCHolographicInputManager::GetInstance();
  PostProcessor = MPCHolographicInputManager::GetPostProcessor(v7, v8, v9, v10);
  v12 = PostProcessor;
  v15[0] = (__int64)PostProcessor;
  if ( PostProcessor )
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *, void *))(*(_QWORD *)v12 + 40LL))(
          v12,
          v16,
          a2);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      638LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
  return a2;
}
