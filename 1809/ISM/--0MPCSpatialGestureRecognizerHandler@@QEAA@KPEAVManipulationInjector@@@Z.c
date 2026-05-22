/*
 * XREFs of ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18004F450
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004CFF4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x18004F7FC (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x18005006C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this,
        int a2,
        struct ManipulationInjector *a3)
{
  _QWORD *v5; // r15
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int ActivationFactory; // eax
  __int64 v12; // rsi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  HSTRING v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _QWORD v25[3]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v25[1] = -2LL;
  v25[2] = this;
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  *((_DWORD *)this + 2) = a2;
  v5 = (_QWORD *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v6 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  memset_0((char *)this + 32, 0, 0x48uLL);
  *((_QWORD *)this + 14) = 0LL;
  v7 = (__int64 *)((char *)this + 120);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = a3;
  v25[0] = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"Windows.UI.Input.Spatial.SpatialGestureRecognizer",
         0x31u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_77214186_57b9_3150_8382_698b24e264d0, v25);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v12 = v25[0];
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v12 + 48LL))(v12, 0LL, v5);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = *v6;
  if ( *v6 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
          *v5,
          &GUID_10d1aeec_4246_416e_9cb0_e8273ec2e793,
          v6);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(this);
  MPCSpatialGestureRecognizerHandler::SetMode(this, 0LL);
  string = 0LL;
  v17 = WindowsCreateStringReference(L"Windows.Perception.PerceptionTimestampHelper", 0x2Cu, &hstringHeader, &string);
  if ( v17 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    JUMPOUT(0x18004F6F2LL);
  }
  v20 = string;
  v21 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = RoGetActivationFactory(v20, &GUID_d2b11f53_48f3_4131_9edc_4979a97e16bd, (char *)this + 120);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v23 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return this;
}
