/*
 * XREFs of ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x18006DC48
 * Callers:
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18006B5A4 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18006D878 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::_)(Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke @ 0x18006FDF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18006FDF0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18006CC00 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIController::ApplyUserSettingsForController(WGIController *this, unsigned int *a2)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  HRESULT v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  bool AccessibilitySettings; // r15
  __int64 v12; // r8
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rsi
  char *v21; // rcx
  char *v22; // rdi
  HANDLE FileW; // rax
  const char *v24; // r9
  void *v25; // rbx
  __int64 v26; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v27; // rcx
  signed int LastError; // eax
  unsigned __int64 v29; // rcx
  signed int v30; // eax
  unsigned __int64 v31; // rcx
  bool v32; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+50h] [rbp-51h] BYREF
  __int64 v34; // [rsp+58h] [rbp-49h] BYREF
  int v35; // [rsp+60h] [rbp-41h] BYREF
  __int64 v36; // [rsp+68h] [rbp-39h] BYREF
  __int64 v37; // [rsp+70h] [rbp-31h] BYREF
  __int64 *v38; // [rsp+78h] [rbp-29h] BYREF
  __int64 v39; // [rsp+80h] [rbp-21h] BYREF
  DWORD BytesReturned; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v41[2]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE InBuffer[8]; // [rsp+A0h] [rbp-1h] BYREF
  char v43; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v41[1] = -2LL;
  v39 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
    goto LABEL_54;
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 8))(
                        *((_QWORD *)this + 8),
                        &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb,
                        &v38);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 461LL;
LABEL_18:
    v7 = (unsigned int)ActivationFactory;
    goto LABEL_19;
  }
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
                        *((_QWORD *)this + 9),
                        &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                        &v34);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 463LL;
    goto LABEL_18;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 112LL))(v34, &v37);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 464LL;
    goto LABEL_18;
  }
  if ( !v37 )
  {
    v5 = -2147024809;
    v7 = 2147942487LL;
    v6 = 465LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v7);
    goto LABEL_28;
  }
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
LABEL_65:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    JUMPOUT(0x18006E148LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v39);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 470LL;
    goto LABEL_18;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v39 + 168LL))(v39, v37, &v36);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v6 = 471LL;
    goto LABEL_18;
  }
  if ( a2 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 48LL))(v36, &v35);
    v5 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v6 = 475LL;
      goto LABEL_18;
    }
    if ( v35 != *a2 )
      goto LABEL_54;
  }
  v32 = 0;
  hstringHeader.Reserved.Reserved1 = (PVOID)*((_QWORD *)this + 18);
  v33 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v36 + 88LL))(
         v36,
         &v33);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 490LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_26;
  }
  AccessibilitySettings = GetAccessibilitySettings(
                            *((_QWORD *)this + 18),
                            v33,
                            v41,
                            (unsigned __int64 *)&hstringHeader.Reserved.Reserved2[8],
                            (unsigned __int8 *)&hstringHeader.Reserved.Reserved2[16],
                            &v32);
  v12 = *v38;
  LOBYTE(v12) = v32;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v38 + 224))(v38, 1LL, v12);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 500LL;
    goto LABEL_25;
  }
  v20 = -1LL;
  v21 = &v43;
  if ( !AccessibilitySettings )
    v21 = InBuffer;
  v22 = InBuffer;
  if ( !AccessibilitySettings )
    v22 = &v43;
  *(_QWORD *)v21 = *((_QWORD *)this + 18);
  *(_QWORD *)v22 = 0LL;
  FileW = CreateFileW(L"\\\\.\\XboxGIP", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
  v25 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    v26 = 521LL;
    goto LABEL_56;
  }
  v20 = (__int64)FileW;
  if ( DeviceIoControl(FileW, 0x40001CE8u, &hstringHeader, 0x18u, 0LL, 0, 0LL, 0LL) )
  {
    if ( !DeviceIoControl(v25, 0x40001D14u, InBuffer, 0x10u, InBuffer, 0x10u, &BytesReturned, 0LL) )
    {
      v26 = 541LL;
      goto LABEL_56;
    }
    if ( *(_QWORD *)v22 != v41[0] )
    {
      *(_QWORD *)v22 = v41[0];
      if ( !DeviceIoControl(v25, 0x40001D10u, InBuffer, 0x10u, 0LL, 0, 0LL, 0LL) )
      {
        v26 = 556LL;
        goto LABEL_56;
      }
    }
    if ( !CloseHandle(v25) )
    {
      LastError = GetLastError();
      v29 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v29 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v29);
      __debugbreak();
    }
    v27 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
    }
LABEL_54:
    v5 = 0;
    goto LABEL_28;
  }
  v26 = 531LL;
LABEL_56:
  v5 = wil::details::in1diag3::Return_GetLastError(
         retaddr,
         (void *)v26,
         (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
         v24);
  if ( v20 != -1 && !CloseHandle((HANDLE)v20) )
  {
    v30 = GetLastError();
    v31 = (unsigned __int16)v30 | 0x80070000;
    if ( v30 <= 0 )
      v31 = (unsigned int)v30;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v31);
    goto LABEL_65;
  }
LABEL_26:
  v13 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_28:
  v14 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  }
  v17 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v5;
}
