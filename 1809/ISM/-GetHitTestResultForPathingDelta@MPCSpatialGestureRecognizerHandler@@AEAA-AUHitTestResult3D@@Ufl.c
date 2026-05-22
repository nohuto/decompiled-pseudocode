/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800514DC
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180050CB0 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x180050E90 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180042018 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // r8
  const char *v8; // r9
  struct MPCHolographicInputManager *v9; // rax
  const char *v10; // r9
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+34h] [rbp-4Ch] BYREF
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  memset_0(&v15, 0, 0x3CuLL);
  memset_0(a2, 0, 0x140uLL);
  v15 = *(_DWORD *)(a1 + 8);
  v16 = *(_OWORD *)(a1 + 136);
  v17 = *(_DWORD *)(a1 + 152);
  v18 = *(_DWORD *)(a1 + 156);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v16, v7, v8);
  *(float *)&v16 = *(float *)&v16 + *a3;
  *((float *)&v16 + 1) = *((float *)&v16 + 1) + a3[1];
  *((float *)&v16 + 2) = *((float *)&v16 + 2) + a3[2];
  v9 = MPCHolographicInputManager::GetInstance();
  v11 = retaddr;
  if ( !*((_BYTE *)v9 + 1872) )
  {
LABEL_7:
    wil::details::in1diag3::_FailFast_Unexpected(
      v11,
      (void *)0x5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
      v10);
    JUMPOUT(0x180051644LL);
  }
  v12 = *((_QWORD *)v9 + 236);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = (*(__int64 (__fastcall **)(__int64, int *, void *))(*(_QWORD *)v12 + 40LL))(v12, &v15, a2);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x27B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_7;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a2;
}
