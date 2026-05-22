/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180050CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800514DC (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x18005164C (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180051E0C (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  unsigned __int64 v6; // xmm0_8
  __int64 v7; // rdi
  int v8; // r14d
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  ISMTracing *v14; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h]
  _BYTE v18[152]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-38h]
  int v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D4h] [rbp-2Ch]
  int v22; // [rsp+DCh] [rbp-24h]
  char v23; // [rsp+350h] [rbp+250h]
  float v24; // [rsp+354h] [rbp+254h]
  float v25; // [rsp+358h] [rbp+258h]
  _BYTE v26[4]; // [rsp+740h] [rbp+640h] BYREF
  float v27; // [rsp+744h] [rbp+644h]
  float v28; // [rsp+748h] [rbp+648h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v18, Instance, 0x710uLL);
  v5 = v20;
  *((_QWORD *)this + 17) = v19;
  v16 = 0LL;
  *(_QWORD *)((char *)this + 148) = v21;
  v6 = v16;
  *((_DWORD *)this + 36) = v5;
  v17 = 0;
  v16 = v6;
  *((_DWORD *)this + 39) = v22;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v26, &v16);
  v7 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v7 + 88) & 0xFFFFFF7F) != 0 )
  {
    v16 = *(_QWORD *)(v7 + 144);
    v8 = v16;
    v9 = HIDWORD(v16);
    v10 = HIDWORD(v16);
  }
  else
  {
    if ( !v23 )
    {
LABEL_11:
      *((_BYTE *)this + 200) = 1;
      return 0LL;
    }
    v8 = (int)v24;
    LODWORD(v9) = (int)v25;
    LODWORD(v10) = (int)v25;
  }
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    LODWORD(v9) = v10;
  }
  if ( (int)MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(this, *((_QWORD *)this + 20)) < 0 )
    goto LABEL_11;
  *(_DWORD *)(*((_QWORD *)this + 13) + 1096LL) = 7;
  *(float *)(*((_QWORD *)this + 13) + 1112LL) = (float)v8;
  *(float *)(*((_QWORD *)this + 13) + 1116LL) = (float)(int)v9;
  v12 = (int)v27;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 48) = v12;
  *((_DWORD *)this + 49) = (int)v28;
  v13 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v13 && *v13 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v14, L"PathStarted");
  }
  return 0LL;
}
