/*
 * XREFs of ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x180026948
 * Callers:
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x1800268A0 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Gaming::Input::RawGameController___Windows::Gaming::Input::IRawGameController_____::_)(IInspectable___Windows::Gaming::Input::IRawGameController__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::RawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___1_IInspectable___Windows::Gaming::Input::IRawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___ @ 0x180026BF4 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180026C98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AAC4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005633C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7540 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIRawInputProvider::StartRawGameControllerWatcher(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int ActivationFactory; // eax
  _QWORD *v4; // rax
  struct Windows::Gaming::Input::IRawGameController *v5; // rcx
  struct Windows::Gaming::Input::IRawGameController **v6; // rax
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int i; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // eax
  int v20; // eax
  struct Windows::Gaming::Input::IRawGameController *v21; // rcx
  struct Windows::Gaming::Input::IRawGameController *v22; // [rsp+28h] [rbp-39h] BYREF
  __int64 v23; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h] BYREF
  __int128 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  __int64 v31; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v29[1] = -2LL;
  v23 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v2 = this + 3;
  EnterCriticalSection(this + 3);
  v29[0] = v2;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Gaming.Input.RawGameController",
    0x27u,
    0x26u);
  ActivationFactory = RoGetActivationFactory(v31, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, &v23);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)ActivationFactory,
      (int)v22);
    __debugbreak();
  }
  *(_QWORD *)&v26 = WGIRawInputProvider::OnRawGameControllerAdded;
  DWORD2(v26) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v26;
  v4 = (_QWORD *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Gaming::Input::RawGameController___Windows::Gaming::Input::IRawGameController_____::___IInspectable___Windows::Gaming::Input::IRawGameController____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::RawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___1_IInspectable___Windows::Gaming::Input::IRawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___(
                   &v22,
                   &hstringHeader);
  *(_QWORD *)&v26 = *v4;
  *v4 = 0LL;
  v5 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v5);
  }
  Microsoft::WRL::ComPtr<InputSite>::operator=(&v27, &v26);
  if ( (_QWORD)v26 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 16LL))(v26);
  *(_QWORD *)&v26 = WGIRawInputProvider::OnRawGameControllerRemoved;
  DWORD2(v26) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v26;
  v6 = (struct Windows::Gaming::Input::IRawGameController **)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Gaming::Input::RawGameController___Windows::Gaming::Input::IRawGameController_____::___IInspectable___Windows::Gaming::Input::IRawGameController____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::RawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___1_IInspectable___Windows::Gaming::Input::IRawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___(
                                                               &v26,
                                                               &hstringHeader);
  v22 = *v6;
  *v6 = 0LL;
  v7 = v26;
  if ( (_QWORD)v26 )
  {
    *(_QWORD *)&v26 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v7);
  }
  Microsoft::WRL::ComPtr<InputSite>::operator=(&v28, &v22);
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v22 + 16LL))(v22);
  v9 = v27;
  if ( !v27 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1C2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v8);
    __debugbreak();
  }
  v10 = v28;
  if ( !v28 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1C3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v8);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR *))(*(_QWORD *)v23 + 48LL))(v23, v27, &this[1].SpinCount);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v11,
      (int)v22);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)v23 + 64LL))(
          v23,
          v10,
          this + 2);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v12,
      (int)v22);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 80LL))(v23, &v25);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v13,
      (int)v22);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 56LL))(v25, &v24);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v14,
      (int)v22);
    __debugbreak();
  }
  for ( i = 0; i < v24; ++i )
  {
    v22 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Gaming::Input::IRawGameController **))(*(_QWORD *)v25 + 48LL))(
            v25,
            i,
            &v22);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v19,
        (int)v22);
      __debugbreak();
    }
    v20 = WGIRawInputProvider::OnRawGameControllerAdded((WGIRawInputProvider *)this, 0LL, v22);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v20,
        (int)v22);
      __debugbreak();
    }
    v21 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v29);
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
