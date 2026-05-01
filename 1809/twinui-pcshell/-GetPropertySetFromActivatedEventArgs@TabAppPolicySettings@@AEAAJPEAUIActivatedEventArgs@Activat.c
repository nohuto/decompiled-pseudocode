/*
 * XREFs of ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1801F3E24
 * Callers:
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x1801F3CA0 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4060 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4190 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180027DE0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(
        TabAppPolicySettings *this,
        struct Windows::ApplicationModel::Activation::IActivatedEventArgs *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  HSTRING_HEADER *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  int v16; // eax
  char v17; // cl
  struct Windows::Foundation::Collections::IPropertySet *v18; // rax
  _BYTE v20[8]; // [rsp+30h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+38h] [rbp-21h] BYREF
  __int64 v22; // [rsp+40h] [rbp-19h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v24; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER v25; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v23[1] = -2LL;
  *a3 = 0LL;
  if ( a2 )
  {
    v23[0] = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *))a2)(
           a2,
           &GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51,
           v23);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 207LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)v6);
LABEL_20:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v23);
      return v5;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23[0] + 64LL))(v23[0], &v24);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 210LL;
      goto LABEL_7;
    }
    v8 = *((_QWORD *)this + 8);
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &SID_ViewEventDispatcher,
           &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a,
           &v22);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)v9);
LABEL_19:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
      goto LABEL_20;
    }
    v21 = 0LL;
    v10 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v10 + 64LL))(
            v10,
            v24,
            &v21);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)off_1804002B0);
      v16 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
              (__int64)v14[1].Reserved.Reserved1,
              v15,
              v20);
      v17 = v20[0];
      if ( v16 < 0 )
        v17 = 0;
      if ( !v17 )
      {
        v18 = v21;
        v21 = 0LL;
        *a3 = v18;
        v5 = 0;
        goto LABEL_18;
      }
      v5 = -2147019873;
      v12 = 2147947423LL;
      v13 = 221LL;
    }
    else
    {
      v12 = (unsigned int)v11;
      v13 = 217LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)v12);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    goto LABEL_19;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
    (const char *)0x80070057LL);
  return v5;
}
