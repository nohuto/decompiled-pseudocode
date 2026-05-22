/*
 * XREFs of ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A2F8
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A4C0 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18005A960 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCHeadMovementDetector::EnsureFrameOfReference(MPCHeadMovementDetector *this)
{
  __int64 *v2; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r14
  char v9; // bl
  __int64 v10; // rcx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    return 1;
  wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(&v18);
  v4 = v18;
  v5 = (__int64 *)((char *)this + 48);
  v6 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 64LL))(v4, (char *)this + 48);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = *v5;
  if ( *v5
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x83,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)0x8000FFFFLL),
        (v8 = *v5) != 0) )
  {
    v10 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 88LL))(v8, (char *)this + 56);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v13 = *((_QWORD *)this + 7);
    if ( !v13 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v12);
      __debugbreak();
    }
    v14 = *v2;
    *v2 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 96LL))(v13, v2);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x18005A4B9LL);
    }
    if ( !*v2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x91,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v16);
      __debugbreak();
    }
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
