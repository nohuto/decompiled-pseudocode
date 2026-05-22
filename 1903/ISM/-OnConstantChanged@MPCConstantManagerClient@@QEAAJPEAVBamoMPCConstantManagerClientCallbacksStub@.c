/*
 * XREFs of ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18011EE70
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180124210 (-OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallb.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180014480 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18010FF18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs_____ @ 0x180116F4C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Wind.c)
 *     ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x180119188 (--0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHStri.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18011BF30 (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 MPCConstantManagerClient::OnConstantChanged(
        __int64 a1,
        struct Windows::Foundation::IPropertyValue *a2,
        int a3,
        ...)
{
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // rbx
  struct Windows::Foundation::IPropertyValue *v9; // rdi
  void *v10; // rax
  const char *v11; // r9
  __int64 v12; // rcx
  int v13; // edi
  volatile signed __int32 *v14; // rbx
  struct Windows::Foundation::IPropertyValue *v16; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v21[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct Windows::Foundation::IPropertyValue *v23; // [rsp+98h] [rbp+28h] BYREF
  const WCHAR *v24; // [rsp+A8h] [rbp+38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h]
  PROPVARIANT *propvarIn; // [rsp+B0h] [rbp+40h]
  PROPVARIANT *v27; // [rsp+B8h] [rbp+48h]
  va_list va1; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, const WCHAR *);
  propvarIn = va_arg(va1, PROPVARIANT *);
  v27 = va_arg(va1, PROPVARIANT *);
  v23 = a2;
  v20[1] = -2LL;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string, (const WCHAR **)va);
  v23 = 0LL;
  v16 = 0LL;
  v5 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(propvarIn, &v16);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      225LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v23;
  v23 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(v27, &v23);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      226LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v23;
  v23 = 0LL;
  v9 = v16;
  v16 = 0LL;
  v10 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v10 )
    v12 = Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::ConstantChangedEventArgs(
            (__int64)v10,
            a3,
            &string,
            (__int64)v9,
            (__int64)v8);
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      234LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      v11);
    __debugbreak();
  }
  v20[0] = v12;
  v19 = a1;
  v21[0] = &v19;
  v21[1] = v20;
  v13 = 0;
  v18 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 128));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
    &v18,
    (volatile signed __int32 **)(a1 + 120));
  if ( a1 != -128 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 128));
  v14 = v18;
  if ( v18 )
  {
    v13 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs_____(
            v21,
            v18,
            (RTL_SRWLOCK *)(a1 + 120));
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
  }
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      236LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v13);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v23);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v16);
  WindowsDeleteString(string);
  return 0LL;
}
