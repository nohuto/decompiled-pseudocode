/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9CEC
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A76D0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800565B0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A7B40.c)
 *     ??$As@UIGameController@Input@Gaming@Windows@@@?$ComPtr@UIRawGameController@Input@Gaming@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGameController@Input@Gaming@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A8348 (--$As@UIGameController@Input@Gaming@Windows@@@-$ComPtr@UIRawGameController@Input@Gaming@Windows@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___ @ 0x1800A8780 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A8780.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8ECC (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA710 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?BCryptDestroyHash@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800ABE84 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-BCryptDestroyHash@@YAJ0@ZU-$integral.c)
 *     ?Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAUIGameInputDeviceInfoBuilder@@@Z @ 0x1800D3C88 (-Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAU.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  volatile signed __int64 *v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rbx
  int v12; // eax
  UCHAR *StringRawBuffer; // rbx
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  UCHAR *v17; // rbx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  struct GameInputDeviceInfo *v30; // rbx
  void *v31; // rax
  unsigned int v32; // edi
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v39; // [rsp+54h] [rbp-B4h] BYREF
  UINT32 length[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int64 *v45; // [rsp+80h] [rbp-88h] BYREF
  struct GameInputDeviceInfo *v46[4]; // [rsp+88h] [rbp-80h] BYREF
  UCHAR pbOutput[16]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h]
  UCHAR v49[16]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-30h]
  _OWORD v51[3]; // [rsp+E8h] [rbp-20h] BYREF
  int v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+11Ch] [rbp+14h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v46[1] = (struct GameInputDeviceInfo *)-2LL;
  if ( !*((_QWORD *)this + 23) )
  {
    v4 = (volatile signed __int64 *)operator new(0x620uLL);
    v45 = v4;
    memset_0((void *)v4, 0, 0x620uLL);
    *((_DWORD *)v4 + 2) = 1568;
    *((_QWORD *)this + 23) = v4;
    **((_DWORD **)this + 23) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    *(_DWORD *)(*((_QWORD *)this + 23) + 4LL) = *((_DWORD *)this + 45);
    *(_DWORD *)(*((_QWORD *)this + 23) + 8LL) = 1568;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**((_QWORD **)this + 9) + 80LL))(
           *((_QWORD *)this + 9),
           &v39);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        396LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), &v38);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        397LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v43 = 0LL;
    string = 0LL;
    v7 = *((_QWORD *)this + 8);
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 136LL);
    WindowsDeleteString(0LL);
    v43 = 0LL;
    v9 = v8(v7, &v43);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        401LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = *((_QWORD *)this + 8);
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 128LL);
    WindowsDeleteString(string);
    string = 0LL;
    v12 = v11(v10, &string);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        402LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    StringRawBuffer = (UCHAR *)WindowsGetStringRawBuffer(v43, length);
    memset_0(pbOutput, 0, 0x20uLL);
    phHash = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &phHash,
      0LL);
    v14 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x41, &phHash, 0LL, 0, 0LL, 0, 0);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x199,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = BCryptHashData(phHash, StringRawBuffer, 2 * length[0], 0);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x19A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = BCryptFinishHash(phHash, pbOutput, 0x20u, 0);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x19B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    *(_OWORD *)v49 = *(_OWORD *)pbOutput;
    v50 = v48;
    if ( string )
    {
      v17 = (UCHAR *)WindowsGetStringRawBuffer(string, length);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &phHash,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &phHash,
        0LL);
      v18 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x41, &phHash, 0LL, 0, 0LL, 0, 0);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x1A3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v19 = BCryptHashData(phHash, v17, 2 * length[0], 0);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x1A4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      v20 = BCryptFinishHash(phHash, v49, 0x20u, 0);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x1A5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
    }
    v42 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v42);
    v21 = GameInputDeviceInfoBuilder::Create(
            v39,
            (unsigned __int16)v38,
            *((unsigned int *)this + 44),
            pbOutput,
            v49,
            &v42);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        431LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v51[0] = _mm_load_si128((const __m128i *)&_xmm);
    v51[1] = _mm_load_si128((const __m128i *)&_xmm);
    v51[2] = _mm_load_si128((const __m128i *)&_xmm);
    v52 = 16;
    v53 = 19;
    v22 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v42 + 24LL))(v42, v51);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        451LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(__int64, struct GameInputDeviceInfo **))(*(_QWORD *)v42 + 32LL))(v42, v46);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        454LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
    v24 = WGIController::NotifyDeviceAttach(this, a2, v46[0]);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        456LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 160LL))(
            *((_QWORD *)this + 8),
            this);
    if ( v25 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        457LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v42);
    if ( phHash )
      BCryptDestroyHash(phHash);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v43);
  }
  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  v44 = 0LL;
  v46[2] = this;
  v26 = *((_QWORD *)this + 7);
  while ( v26 >= 0 )
  {
    v27 = v26;
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v26 + 1, v26);
    if ( v27 == v26 )
      goto LABEL_42;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v26 + 16));
LABEL_42:
  v45 = (volatile signed __int64 *)this;
  v28 = *((_QWORD *)this + 7);
  while ( v28 >= 0 )
  {
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v28 + 1, v28);
    if ( v29 == v28 )
      goto LABEL_47;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v28 + 16));
LABEL_47:
  v30 = 0LL;
  v31 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v31 )
    v30 = (struct GameInputDeviceInfo *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___(
                                          (__int64)v31,
                                          &v45);
  v46[3] = v30;
  if ( v45 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v45);
  if ( v30 )
  {
    v35 = Microsoft::WRL::ComPtr<Windows::Gaming::Input::IRawGameController>::As<Windows::Gaming::Input::IGameController>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9,
            &v44);
    v32 = v35;
    if ( v35 < 0 )
    {
      v34 = 473LL;
LABEL_57:
      v33 = (unsigned int)v35;
      goto LABEL_58;
    }
    v35 = (*(__int64 (__fastcall **)(__int64, struct GameInputDeviceInfo *, char *))(*(_QWORD *)v44 + 80LL))(
            v44,
            v30,
            (char *)this + 280);
    v32 = v35;
    if ( v35 < 0 )
    {
      v34 = 474LL;
      goto LABEL_57;
    }
    WGIController::ApplyUserSettingsForController(this, 0LL);
    (*(void (__fastcall **)(struct GameInputDeviceInfo *))(*(_QWORD *)v30 + 16LL))(v30);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
    return 0LL;
  }
  v32 = -2147024882;
  v33 = 2147942414LL;
  v34 = 471LL;
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v34,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
    (const char *)v33);
  if ( v30 )
    (*(void (__fastcall **)(struct GameInputDeviceInfo *))(*(_QWORD *)v30 + 16LL))(v30);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
  return v32;
}
