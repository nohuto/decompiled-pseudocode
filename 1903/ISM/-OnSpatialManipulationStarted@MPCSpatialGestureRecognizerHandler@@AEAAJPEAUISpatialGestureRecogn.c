/*
 * XREFs of ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180090750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x18008EE98 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800903E4 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180091714 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  __int64 v6; // xmm0_8
  int v7; // eax
  __int64 v8; // rax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  int v14; // [rsp+30h] [rbp-D8h]
  _BYTE v15[152]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-38h]
  int v17; // [rsp+D8h] [rbp-30h]
  __int64 v18; // [rsp+DCh] [rbp-2Ch]
  int v19; // [rsp+E4h] [rbp-24h]
  char v20; // [rsp+1C8h] [rbp+C0h]
  float v21; // [rsp+1CCh] [rbp+C4h]
  float v22; // [rsp+1D0h] [rbp+C8h]
  _BYTE v23[4]; // [rsp+928h] [rbp+820h] BYREF
  float v24; // [rsp+92Ch] [rbp+824h]
  float v25; // [rsp+930h] [rbp+828h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v15, Instance, 0x8F0uLL);
  v5 = v17;
  *((_QWORD *)this + 17) = v16;
  v6 = v18;
  *((_DWORD *)this + 36) = v5;
  v7 = v19;
  *(_QWORD *)((char *)this + 148) = v6;
  *((_DWORD *)this + 39) = v7;
  v13 = 0LL;
  v14 = 0;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta((__int64)this, v23, (float *)&v13);
  v8 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v8 + 88) & 0xFFFFFF7F) != 0 )
  {
    v13 = *(_QWORD *)(v8 + 144);
    v9 = v13;
    v10 = HIDWORD(v13);
  }
  else
  {
    if ( !v20 )
    {
LABEL_7:
      *((_BYTE *)this + 200) = 1;
      return 0LL;
    }
    v9 = (int)v21;
    v10 = (int)v22;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 14);
  if ( (int)MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(this, *((_QWORD *)this + 20)) < 0 )
    goto LABEL_7;
  *(_DWORD *)(*((_QWORD *)this + 13) + 656LL) = 7;
  *(float *)(*((_QWORD *)this + 13) + 672LL) = (float)v9;
  *(float *)(*((_QWORD *)this + 13) + 676LL) = (float)v10;
  v11 = (int)v24;
  *((_BYTE *)this + 188) = 1;
  *((_DWORD *)this + 48) = v11;
  *((_DWORD *)this + 49) = (int)v25;
  ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"PathStarted");
  return 0LL;
}
