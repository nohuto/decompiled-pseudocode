/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180303880
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802CA5A0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802D9020 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x18009BD84 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T55@Z @ 0x180301008 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplica.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180303A8C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VAp.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x180305614 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 AppViewDataSourceAdapter_CreateInstance(unsigned int a1, ...)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rcx
  __int64 v3; // r9
  int CanCastTo; // edi
  AppViewDataSourceAdapter *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9[6]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v11; // [rsp+90h] [rbp+8h] BYREF
  __int64 v12; // [rsp+98h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+10h]
  _QWORD *v14; // [rsp+A0h] [rbp+18h] BYREF
  va_list va1; // [rsp+A0h] [rbp+18h]
  AppViewDataSourceAdapter *v16; // [rsp+A8h] [rbp+20h] BYREF
  va_list va2; // [rsp+A8h] [rbp+20h]
  __int64 v18; // [rsp+B0h] [rbp+28h] BYREF
  va_list va3; // [rsp+B0h] [rbp+28h]
  __int64 v20; // [rsp+B8h] [rbp+30h] BYREF
  va_list va4; // [rsp+B8h] [rbp+30h]
  __int64 v22; // [rsp+C0h] [rbp+38h] BYREF
  va_list va5; // [rsp+C0h] [rbp+38h]
  __int64 v24; // [rsp+C8h] [rbp+40h] BYREF
  va_list va6; // [rsp+C8h] [rbp+40h]
  _QWORD *v26; // [rsp+D0h] [rbp+48h] BYREF
  va_list va7; // [rsp+D0h] [rbp+48h]
  va_list va8; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va8, a1);
  va_start(va7, a1);
  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD *);
  va_copy(va3, va2);
  v16 = va_arg(va3, AppViewDataSourceAdapter *);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v24 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v26 = va_arg(va8, _QWORD *);
  v11 = a1;
  v9[1] = -2LL;
  v8 = 0LL;
  v9[0] = 0LL;
  v1 = v26;
  *v26 = 0LL;
  try
  {
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(
      (_QWORD **)va1,
      (__int64 *)va3);
    v26 = v14;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum AppViewDataSourceScope,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
      (AppViewDataSourceAdapter **)va2,
      &v11,
      (__int64 *)va,
      v9,
      &v8,
      (_QWORD **)va7,
      (__int64 *)va4,
      (__int64 *)va5,
      (__int64 *)va6);
    *v1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v5 = v16;
      *v1 = v16;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v16 + 8,
                    v3,
                    v1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    }
    if ( CanCastTo < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        594LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)CanCastTo);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease((AppViewDataSourceAdapter **)va2);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)va1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x255,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v6);
  }
  return result;
}
