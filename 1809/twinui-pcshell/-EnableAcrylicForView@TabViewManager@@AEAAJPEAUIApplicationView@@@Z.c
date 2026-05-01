/*
 * XREFs of ?EnableAcrylicForView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DAF7C
 * Callers:
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x1801D8EC8 (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall TabViewManager::EnableAcrylicForView(TabViewManager *this, struct IApplicationView *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11[1] = -2LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v10);
  if ( !v10 )
    goto LABEL_7;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 24LL))(v10, v11);
  v7 = v3;
  if ( v3 >= 0 )
  {
    v12[1] = 0LL;
    v12[0] = 5LL;
    wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService(v5, v4, v6);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, int))(**((_QWORD **)this + 50) + 40LL))(
           *((_QWORD *)this + 50),
           v11[0],
           19LL,
           v12,
           16);
    v7 = v3;
    if ( v3 < 0 )
    {
      v8 = 4117LL;
      goto LABEL_6;
    }
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v8 = 4110LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return v7;
}
