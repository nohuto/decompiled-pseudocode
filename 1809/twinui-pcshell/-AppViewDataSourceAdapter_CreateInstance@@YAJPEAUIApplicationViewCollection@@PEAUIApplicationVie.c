/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x1802AB1D8
 * Callers:
 *     _lambda_e13c9660f56a8071ad8948355737f92d_::operator() @ 0x18025C184 (_lambda_e13c9660f56a8071ad8948355737f92d_--operator().c)
 *     ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802837B0 (-Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x180091950 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T55@Z @ 0x1802A89D0 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplica.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802AB5B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VAp.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x1802AD144 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter_CreateInstance(
        struct IApplicationViewCollection *a1,
        struct IApplicationViewIconLoader *a2,
        struct IImmersiveShellHookService *a3,
        struct IInspectable *a4,
        struct IAppViewDataSourceAdapter **a5)
{
  struct IAppViewDataSourceAdapter **v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // r9
  int CanCastTo; // edi
  AppViewDataSourceAdapter *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  AppViewDataSourceAdapter *v12; // [rsp+50h] [rbp-58h] BYREF
  __int64 v13; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct IApplicationViewCollection *v19; // [rsp+B0h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v20; // [rsp+B8h] [rbp+10h] BYREF
  struct IImmersiveShellHookService *v21; // [rsp+C0h] [rbp+18h] BYREF
  struct IInspectable *v22; // [rsp+C8h] [rbp+20h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v17[1] = -2LL;
  v5 = a5;
  *a5 = 0LL;
  try
  {
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(&v13, &v22);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17[0] = v13;
    LODWORD(a5) = 0;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum AppViewDataSourceScope,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
      &v12,
      (unsigned int *)&a5,
      &v19,
      (__int64 *)&v20,
      &v21,
      v17,
      &v16,
      &v15,
      &v14);
    *v5 = 0LL;
    if ( InlineIsEqualGUID(&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v9 = v12;
      *v5 = v12;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v9 + 8LL))(v9);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v12 + 8,
                    v7,
                    v5);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(struct IAppViewDataSourceAdapter *))(*(_QWORD *)*v5 + 8LL))(*v5);
    }
    if ( CanCastTo < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        560LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)CanCastTo);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x233,
                    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                    v10);
    return (unsigned int)a5;
  }
  return result;
}
