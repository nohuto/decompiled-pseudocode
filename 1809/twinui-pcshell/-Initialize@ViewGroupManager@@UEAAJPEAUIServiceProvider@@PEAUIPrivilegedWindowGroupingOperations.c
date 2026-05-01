/*
 * XREFs of ?Initialize@ViewGroupManager@@UEAAJPEAUIServiceProvider@@PEAUIPrivilegedWindowGroupingOperations@@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801FA910
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@ZP81@EAAJK@ZPEAVViewGroupManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@ZP81@EAAJK@ZPEAVViewGroupManager@@@Z @ 0x1801F9AC8 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@.c)
 *     ??$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA?AV?$ComPtr@VWindowGroupManager@@@WRL@Microsoft@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180203AC8 (--$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA-AV-$Com.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroupManager::Initialize(
        ViewGroupManager *this,
        struct IServiceProvider *a2,
        struct IPrivilegedWindowGroupingOperations *a3,
        struct IPrivilegedForegroundOperations *a4)
{
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v18[1] = -2LL;
  v18[0] = (__int64)a3;
  try
  {
    v7 = (__int64 *)wil::MakeOrThrow<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>();
    v8 = *v7;
    *v7 = 0LL;
    if ( v8 )
      v8 += 8LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v17);
    v18[0] = 0LL;
    v9 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v18);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 13);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)this + 104);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        71LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v10);
    v20 = 0LL;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v20);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca,
            &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca,
            &v20);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        74LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v11);
    v13 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementWindowGroupingEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),ViewGroupManager *>(
            (__int64)this + 120,
            v20,
            v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        80LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v13);
    v14 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a4;
    if ( a4 )
      (*(void (__fastcall **)(struct IPrivilegedForegroundOperations *))(*(_QWORD *)a4 + 8LL))(a4);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x56,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v15);
  }
  return result;
}
