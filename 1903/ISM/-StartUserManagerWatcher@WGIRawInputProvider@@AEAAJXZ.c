/*
 * XREFs of ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7BBC
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x1800A6F50 (--$_Callback_once@V-$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInput.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AEA4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::_)(IInspectable___Windows::System::Internal::IUserProfileEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___ @ 0x1800A7290 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1800A7290.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x1800A7A0C (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WGIRawInputProvider::StartUserManagerWatcher(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rbx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  void *v7; // rax
  const char *v8; // r9
  int v9; // eax
  unsigned int i; // edi
  struct Windows::System::Internal::IUserProfile *v11; // rcx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  struct Windows::System::Internal::IUserProfile *v15; // [rsp+28h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-21h] BYREF
  __int64 v17; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  __int64 v19; // [rsp+48h] [rbp-9h] BYREF
  __int128 v20; // [rsp+50h] [rbp-1h]
  __int64 v21; // [rsp+60h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21 = -2LL;
  v18 = 0LL;
  v19 = 0LL;
  v2 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  v17 = 0LL;
  if ( IsEdition(8778LL) )
  {
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.Internal.UserManager",
      0x24u,
      0x23u);
    ActivationFactory = RoGetActivationFactory(v23, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v18);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        525LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)ActivationFactory);
      __debugbreak();
    }
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v5 = **v18;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v19);
    v6 = v5(v4, &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1, &v19);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        527LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    *(_QWORD *)&v20 = WGIRawInputProvider::OnUserProfileChanged;
    DWORD2(v20) = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v20;
    v2 = 0LL;
    v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
      v2 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs___Windows::System::Internal::IUserProfileEventArgs_____::___IInspectable___Windows::System::Internal::IUserProfileEventArgs____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable___Windows::System::Internal::IUserProfileEventArgs___(
             (__int64)v7,
             (__int64)&hstringHeader);
    *(_QWORD *)&v20 = v2;
    if ( !v2 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        532LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        v8);
      __debugbreak();
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v19 + 48LL))(v19, v2, &this[2].LockCount);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        536LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v18)[11])(v18, &v17) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 56LL))(v17, &v16) >= 0 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v15 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)v17 + 48LL))(
               v17,
               i,
               &v15) >= 0 )
          WGIRawInputProvider::OnUserProfileChanged_impl(this, v15);
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v19);
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
  }
  return 0LL;
}
