/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9B8C
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7540 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056310 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18008DC74 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 *     ??$As@UIGameController@Input@Gaming@Windows@@@?$ComPtr@UIRawGameController@Input@Gaming@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGameController@Input@Gaming@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A81D8 (--$As@UIGameController@Input@Gaming@Windows@@@-$ComPtr@UIRawGameController@Input@Gaming@Windows@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___ @ 0x1800A8610 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A8610.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8D5C (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA5DC (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?BCryptDestroyHash@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800ABD54 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-BCryptDestroyHash@@YAJ0@ZU-$integral.c)
 *     ?Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAUIGameInputDeviceInfoBuilder@@@Z @ 0x1800D3A48 (-Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAU.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  WGIController *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rbx
  int v14; // eax
  UCHAR *StringRawBuffer; // rbx
  NTSTATUS v16; // eax
  wil::details::in1diag3 *v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  UCHAR *v20; // rbx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  signed __int64 v30; // rax
  int v31; // r10d
  signed __int64 v32; // rtt
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  struct GameInputDeviceInfo *v35; // rbx
  void *v36; // rax
  unsigned int v37; // edi
  __int64 v38; // r9
  __int64 v39; // rdx
  int v40; // eax
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v44; // [rsp+54h] [rbp-B4h] BYREF
  UINT32 length[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v48; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  WGIController *v50; // [rsp+80h] [rbp-88h] BYREF
  struct GameInputDeviceInfo *v51[4]; // [rsp+88h] [rbp-80h] BYREF
  UCHAR pbOutput[16]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h]
  UCHAR v54[16]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-30h]
  _OWORD v56[3]; // [rsp+E8h] [rbp-20h] BYREF
  int v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+11Ch] [rbp+14h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v51[1] = (struct GameInputDeviceInfo *)-2LL;
  if ( *((_QWORD *)this + 23) )
    goto LABEL_21;
  v4 = (WGIController *)operator new(0x620uLL);
  v50 = v4;
  memset_0(v4, 0, 0x620uLL);
  *((_DWORD *)v4 + 2) = 1568;
  *((_QWORD *)this + 23) = v4;
  **((_DWORD **)this + 23) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
  *(_DWORD *)(*((_QWORD *)this + 23) + 4LL) = *((_DWORD *)this + 45);
  *(_DWORD *)(*((_QWORD *)this + 23) + 8LL) = 1568;
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**((_QWORD **)this + 9) + 80LL))(
         *((_QWORD *)this + 9),
         &v44);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_51:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      396LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), &v43);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      397LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v7);
LABEL_53:
    wil::details::in1diag3::FailFast_Hr(
      v11,
      401LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v48 = 0LL;
  string = 0LL;
  v8 = *((_QWORD *)this + 8);
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 136LL);
  WindowsDeleteString(0LL);
  v48 = 0LL;
  v10 = v9(v8, &v48);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_53;
  v12 = *((_QWORD *)this + 8);
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 128LL);
  WindowsDeleteString(string);
  string = 0LL;
  v14 = v13(v12, &string);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      402LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v14);
LABEL_55:
    wil::details::in1diag3::_FailFast_NtStatus(
      v17,
      (void *)0x199,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  StringRawBuffer = (UCHAR *)WindowsGetStringRawBuffer(v48, length);
  memset_0(pbOutput, 0, 0x20uLL);
  phHash = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &phHash,
    0LL);
  v16 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x41, &phHash, 0LL, 0, 0LL, 0, 0);
  v17 = retaddr;
  if ( v16 < 0 )
    goto LABEL_55;
  v18 = BCryptHashData(phHash, StringRawBuffer, 2 * length[0], 0);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x19A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = BCryptFinishHash(phHash, pbOutput, 0x20u, 0);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x19B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  *(_OWORD *)v54 = *(_OWORD *)pbOutput;
  v55 = v53;
  if ( string )
  {
    v20 = (UCHAR *)WindowsGetStringRawBuffer(string, length);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &phHash,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &phHash,
      0LL);
    v21 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x41, &phHash, 0LL, 0, 0LL, 0, 0);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x1A3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = BCryptHashData(phHash, v20, 2 * length[0], 0);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x1A4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = BCryptFinishHash(phHash, v54, 0x20u, 0);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x1A5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v23);
LABEL_61:
      wil::details::in1diag3::FailFast_Hr(
        v25,
        431LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
  }
  v47 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v47);
  v24 = GameInputDeviceInfoBuilder::Create(
          v44,
          (unsigned __int16)v43,
          *((unsigned int *)this + 44),
          pbOutput,
          v54,
          &v47);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_61;
  v56[0] = _mm_load_si128((const __m128i *)&_xmm);
  v56[1] = _mm_load_si128((const __m128i *)&_xmm);
  v56[2] = _mm_load_si128((const __m128i *)&_xmm);
  v57 = 16;
  v58 = 19;
  v26 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v47 + 24LL))(v47, v56);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      451LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = (*(__int64 (__fastcall **)(__int64, struct GameInputDeviceInfo **))(*(_QWORD *)v47 + 32LL))(v47, v51);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      454LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v28 = WGIController::NotifyDeviceAttach(this, a2, v51[0]);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      456LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 160LL))(
          *((_QWORD *)this + 8),
          this);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      457LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_51;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v47);
  if ( phHash )
    BCryptDestroyHash(phHash);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v48);
LABEL_21:
  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  v49 = 0LL;
  v51[2] = this;
  v30 = *((_QWORD *)this + 7);
  v31 = 0x7FFFFFFF;
  while ( v30 >= 0 )
  {
    if ( (_DWORD)v30 != 0x7FFFFFFF )
    {
      v32 = v30;
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v30 + 1, v30);
      if ( v32 != v30 )
        continue;
    }
    goto LABEL_28;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
    (Microsoft::WRL::Details *)(2 * v30 + 16),
    (volatile int *)a2);
LABEL_28:
  v50 = this;
  v33 = *((_QWORD *)this + 7);
  while ( v33 >= 0 )
  {
    if ( (_DWORD)v33 != v31 )
    {
      v34 = v33;
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v33 + 1, v33);
      if ( v34 != v33 )
        continue;
    }
    goto LABEL_34;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
    (Microsoft::WRL::Details *)(2 * v33 + 16),
    (volatile int *)a2);
LABEL_34:
  v35 = 0LL;
  v36 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v36 )
    v35 = (struct GameInputDeviceInfo *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___(
                                          (__int64)v36,
                                          &v50);
  v51[3] = v35;
  if ( v50 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((__int64)v50);
  if ( v35 )
  {
    v40 = Microsoft::WRL::ComPtr<Windows::Gaming::Input::IRawGameController>::As<Windows::Gaming::Input::IGameController>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9,
            &v49);
    v37 = v40;
    if ( v40 < 0 )
    {
      v39 = 473LL;
LABEL_44:
      v38 = (unsigned int)v40;
      goto LABEL_45;
    }
    v40 = (*(__int64 (__fastcall **)(__int64, struct GameInputDeviceInfo *, char *))(*(_QWORD *)v49 + 80LL))(
            v49,
            v35,
            (char *)this + 280);
    v37 = v40;
    if ( v40 < 0 )
    {
      v39 = 474LL;
      goto LABEL_44;
    }
    WGIController::ApplyUserSettingsForController(this, 0LL);
    (*(void (__fastcall **)(struct GameInputDeviceInfo *))(*(_QWORD *)v35 + 16LL))(v35);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((__int64)this);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v49);
    return 0LL;
  }
  v37 = -2147024882;
  v38 = 2147942414LL;
  v39 = 471LL;
LABEL_45:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v39,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
    (const char *)v38);
  if ( v35 )
    (*(void (__fastcall **)(struct GameInputDeviceInfo *))(*(_QWORD *)v35 + 16LL))(v35);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((__int64)this);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v49);
  return v37;
}
