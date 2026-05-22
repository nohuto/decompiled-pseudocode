/*
 * XREFs of ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A8ECC
 * Callers:
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x1800A7A0C (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::Invoke @ 0x1800A9CC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A9CC0.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9CEC (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AEA4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800A5EA4 (-Close@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 *     ??$As@UIGameController@Input@Gaming@Windows@@@?$ComPtr@UIRawGameController@Input@Gaming@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGameController@Input@Gaming@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A8348 (--$As@UIGameController@Input@Gaming@Windows@@@-$ComPtr@UIRawGameController@Input@Gaming@Windows@.c)
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x1800A963C (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIController::ApplyUserSettingsForController(WGIController *this, unsigned int *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int ActivationFactory; // eax
  unsigned int LastError; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  bool AccessibilitySettings; // di
  __int64 v13; // r8
  char *v14; // rcx
  char *v15; // rbx
  HANDLE FileW; // rdi
  const char *v17; // r9
  HANDLE v18; // rcx
  __int64 v19; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v20; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  bool v26; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+50h] [rbp-51h] BYREF
  int v28; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  void **v31; // [rsp+70h] [rbp-31h] BYREF
  HANDLE hDevice; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-19h] BYREF
  __int64 v35; // [rsp+90h] [rbp-11h] BYREF
  DWORD BytesReturned; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v37[2]; // [rsp+A0h] [rbp-1h] BYREF
  _BYTE OutBuffer[8]; // [rsp+B0h] [rbp+Fh] BYREF
  char v39; // [rsp+B8h] [rbp+17h] BYREF
  HSTRING_HEADER InBuffer; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v41; // [rsp+D8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v37[1] = -2LL;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0;
  if ( !IsEdition(8778LL) )
    goto LABEL_45;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  v5 = **v4;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v33);
  ActivationFactory = v5(v4, &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb, &v33);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 537LL;
LABEL_17:
    v9 = (unsigned int)ActivationFactory;
    goto LABEL_18;
  }
  ActivationFactory = Microsoft::WRL::ComPtr<Windows::Gaming::Input::IRawGameController>::As<Windows::Gaming::Input::IGameController>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9,
                        &v35);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 539LL;
    goto LABEL_17;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 112LL))(v35, &v30);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 540LL;
    goto LABEL_17;
  }
  if ( !v30 )
  {
    LastError = -2147024809;
    v9 = 2147942487LL;
    v8 = 541LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v9);
    goto LABEL_46;
  }
  v41 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &InBuffer,
    L"Windows.System.Internal.UserManager",
    0x24u,
    0x23u);
  ActivationFactory = RoGetActivationFactory(v41, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v34);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 546LL;
    goto LABEL_17;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v34 + 168LL))(v34, v30, &v29);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 547LL;
    goto LABEL_17;
  }
  if ( a2 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v28);
    LastError = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v8 = 551LL;
      goto LABEL_17;
    }
    if ( v28 != *a2 )
      goto LABEL_45;
  }
  v26 = 0;
  InBuffer.Reserved.Reserved1 = (PVOID)*((_QWORD *)this + 19);
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v29 + 88LL))(
          v29,
          &v27);
  LastError = v10;
  if ( v10 < 0 )
  {
    v11 = 566LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_41;
  }
  AccessibilitySettings = GetAccessibilitySettings(
                            *((_QWORD *)this + 19),
                            v27,
                            v37,
                            (unsigned __int64 *)&InBuffer.Reserved.Reserved2[8],
                            (unsigned __int8 *)&InBuffer.Reserved.Reserved2[16],
                            &v26);
  LOBYTE(v13) = v26;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 224LL))(v33, 1LL, v13);
  LastError = v10;
  if ( v10 < 0 )
  {
    v11 = 576LL;
    goto LABEL_24;
  }
  v31 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  hDevice = (HANDLE)-1LL;
  v14 = &v39;
  if ( !AccessibilitySettings )
    v14 = OutBuffer;
  v15 = OutBuffer;
  if ( !AccessibilitySettings )
    v15 = &v39;
  *(_QWORD *)v14 = *((_QWORD *)this + 19);
  *(_QWORD *)v15 = 0LL;
  FileW = CreateFileW(L"\\\\.\\XboxGIP", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
  v18 = hDevice;
  if ( FileW != hDevice )
  {
    Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)&v31);
    v18 = FileW;
    hDevice = FileW;
  }
  if ( v18 != (HANDLE)-1LL )
  {
    if ( !DeviceIoControl(v18, 0x40001CE8u, &InBuffer, 0x18u, 0LL, 0, 0LL, 0LL) )
    {
      v19 = 607LL;
      goto LABEL_40;
    }
    if ( !DeviceIoControl(hDevice, 0x40001D14u, OutBuffer, 0x10u, OutBuffer, 0x10u, &BytesReturned, 0LL) )
    {
      v19 = 617LL;
      goto LABEL_40;
    }
    if ( *(_QWORD *)v15 != v37[0] )
    {
      *(_QWORD *)v15 = v37[0];
      if ( !DeviceIoControl(hDevice, 0x40001D10u, OutBuffer, 0x10u, 0LL, 0, 0LL, 0LL) )
      {
        v19 = 632LL;
        goto LABEL_40;
      }
    }
    v31 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
    Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)&v31);
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 16LL))(v21);
    }
LABEL_45:
    LastError = 0;
    goto LABEL_46;
  }
  v19 = 597LL;
LABEL_40:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v19,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
                v17);
  v31 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)&v31);
LABEL_41:
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_46:
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v35);
  v24 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v24 + 16LL))(v24, *v24);
  }
  return LastError;
}
