/*
 * XREFs of ?StopUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7FF4
 * Callers:
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A734C (--1WGIRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AEA4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::StopUserManagerWatcher(WGIRawInputProvider *this)
{
  int ActivationFactory; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  __int64 v6[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6[1] = -2LL;
  if ( IsEdition(8778LL) && *((_QWORD *)this + 11) )
  {
    v6[0] = 0LL;
    v8 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.Internal.UserManager",
      0x24u,
      0x23u);
    ActivationFactory = RoGetActivationFactory(v8, &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1, v6);
    v3 = retaddr;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6[0] + 56LL))(
                            v6[0],
                            *((_QWORD *)this + 11));
      v3 = retaddr;
      if ( ActivationFactory >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v6);
        return 0LL;
      }
      v4 = 584LL;
    }
    else
    {
      v4 = 581LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_8;
  }
  return 0LL;
}
