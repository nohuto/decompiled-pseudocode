/*
 * XREFs of ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800969D8
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800966A8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800962B0 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCHeadMovementDetector::EnsureFrameOfReference(MPCHeadMovementDetector *this)
{
  __int64 *v2; // r14
  char v3; // di
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, char *); // rsi
  __int64 *v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, char *); // r12
  __int64 *v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbp
  __int64 v18; // rcx
  int v19; // eax
  const char *v20; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 88);
  v3 = 0;
  if ( *((_QWORD *)this + 11) )
    return 1;
  wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>((const WCHAR *)&v22);
  v5 = v22;
  v6 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 64LL);
  v7 = (__int64 *)((char *)this + 72);
  v8 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = v6(v5, (char *)this + 72);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      164LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *v7;
  if ( *v7
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          165LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)0x8000FFFFLL),
        (v10 = *v7) != 0) )
  {
    v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 88LL);
    v12 = (__int64 *)((char *)this + 80);
    v13 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v11(v10, (char *)this + 80);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        174LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v16 = *v12;
    if ( !*v12 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        175LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v15);
      __debugbreak();
    }
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 96LL);
    v18 = *v2;
    *v2 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = v17(v16, v2);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        178LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    if ( !*v2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        179LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v20);
      __debugbreak();
    }
    v3 = 1;
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
  return v3;
}
