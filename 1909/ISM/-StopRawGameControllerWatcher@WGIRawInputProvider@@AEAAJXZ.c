/*
 * XREFs of ?StopRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7D1C
 * Callers:
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A719C (--1WGIRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AAC4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::StopRawGameControllerWatcher(WGIRawInputProvider *this)
{
  int ActivationFactory; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = -2LL;
  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  v9[0] = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v10,
    L"Windows.Gaming.Input.RawGameController",
    0x27u,
    0x26u);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, v9);
  v3 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9[0] + 56LL))(v9[0], *((_QWORD *)this + 9));
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        493LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    if ( *((_QWORD *)this + 10) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9[0] + 72LL))(v9[0], *((_QWORD *)this + 10));
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          498LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
          (const char *)(unsigned int)v7);
    }
    v8 = v9[0];
    if ( v9[0] )
    {
      v9[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EA,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
    (const char *)(unsigned int)ActivationFactory);
  v4 = v9[0];
  if ( v9[0] )
  {
    v9[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
