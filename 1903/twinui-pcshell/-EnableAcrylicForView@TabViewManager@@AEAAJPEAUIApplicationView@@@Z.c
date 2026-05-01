/*
 * XREFs of ?EnableAcrylicForView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18022E93C
 * Callers:
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18022CF68 (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::EnableAcrylicForView(TabViewManager *this, struct IApplicationView *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[1] = -2LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v7);
  if ( !v7 )
    goto LABEL_7;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 24LL))(v7, v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9[1] = 0LL;
    v9[0] = 5LL;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, int))(**((_QWORD **)this + 51) + 40LL))(
           *((_QWORD *)this + 51),
           v8[0],
           19LL,
           v9,
           16);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 3669LL;
      goto LABEL_6;
    }
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  v5 = 3664LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  return v4;
}
