/*
 * XREFs of ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006BBD4
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x18006C620 (--$_Callback_once@V-$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInput.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18006B5A4 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WGIRawInputProvider::StartUserManagerWatcher(WGIRawInputProvider *this)
{
  _DWORD *v2; // rbx
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // eax
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  const char *v8; // r9
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  struct Windows::System::Internal::IUserProfile *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct Windows::System::Internal::IUserProfile *v20; // [rsp+28h] [rbp-49h] BYREF
  __int64 v21; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-31h]
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  __int128 v26; // [rsp+58h] [rbp-19h]
  _BYTE v27[24]; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+80h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28 = -2LL;
  v25 = 0LL;
  v21 = 0LL;
  v2 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    string = 0LL;
    v3 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
    if ( v3 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v25);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)ActivationFactory);
      __debugbreak();
    }
    string = 0LL;
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
           v25,
           &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1,
           &v21);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    *(_QWORD *)&v26 = WGIRawInputProvider::OnUserProfileChanged;
    DWORD2(v26) = 0;
    *(_QWORD *)v27 = this;
    *(_OWORD *)&v27[8] = v26;
    v6 = 0LL;
    *(_QWORD *)&v26 = 0LL;
    v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v7;
    v10 = 0LL;
    if ( v7 )
    {
      *(_QWORD *)v7 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
      v7[3] = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::Internal::UserProfileEventArgs *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v9 + 1) = *(_OWORD *)v27;
      *((_QWORD *)v9 + 4) = *(_QWORD *)&v27[16];
      *(_QWORD *)v9 = off_18013C280;
      v6 = v9;
      v10 = v9;
    }
    v23 = v6;
    if ( !v10 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x203,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        v8);
      JUMPOUT(0x18006BF17LL);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v21 + 48LL))(v21, v6, (char *)this + 80);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x207,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 88LL))(v25, &v24);
    v2 = v10;
    v23 = v10;
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 56LL))(v24, &v22);
      v23 = v10;
      if ( v13 >= 0 )
      {
        v14 = 0;
        v23 = v10;
        if ( v22 )
        {
          do
          {
            v20 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, struct Windows::System::Internal::IUserProfile **))(*(_QWORD *)v24 + 48LL))(
                   v24,
                   v14,
                   &v20) >= 0 )
              WGIRawInputProvider::OnUserProfileChanged_impl(this, v20);
            v15 = v20;
            if ( v20 )
            {
              v20 = 0LL;
              (*(void (__fastcall **)(struct Windows::System::Internal::IUserProfile *))(*(_QWORD *)v15 + 16LL))(v15);
            }
            ++v14;
          }
          while ( v14 < v22 );
          v2 = v10;
          v23 = v10;
        }
      }
    }
  }
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0LL;
}
