/*
 * XREFs of ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18008F268
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18008CC98 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AEA4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180090F68 (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x180091494 (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this,
        int a2,
        struct ManipulationInjector *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // r15
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18[3]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v18[1] = -2LL;
  v18[2] = (__int64)this;
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  *((_DWORD *)this + 2) = a2;
  v5 = (__int64 *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v6 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  memset_0((char *)this + 32, 0, 0x48uLL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = a3;
  v18[0] = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Input.Spatial.SpatialGestureRecognizer",
    0x32u,
    0x31u);
  v7 = v20;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v18);
  ActivationFactory = RoGetActivationFactory(v7, &GUID_77214186_57b9_3150_8382_698b24e264d0, v18);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      49LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v9 = v18[0];
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18[0] + 48LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v5);
  v11 = v10(v9, 0LL, v5);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      50LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = *v5;
  v13 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v5;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v6);
  v14 = v13(v12, &GUID_10d1aeec_4246_416e_9cb0_e8273ec2e793, v6);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      51LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(this);
  MPCSpatialGestureRecognizerHandler::SetMode(this, 0LL);
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Perception.PerceptionTimestampHelper",
    0x2Du,
    0x2Cu);
  v15 = v20;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 15);
  v16 = RoGetActivationFactory(v15, &GUID_d2b11f53_48f3_4131_9edc_4979a97e16bd, (char *)this + 120);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      58LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v18);
  return this;
}
