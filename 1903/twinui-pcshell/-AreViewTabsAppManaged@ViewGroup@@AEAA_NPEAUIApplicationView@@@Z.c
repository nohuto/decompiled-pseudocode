/*
 * XREFs of ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x18025F00C
 * Callers:
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x18025EBF0 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewGroup::AreViewTabsAppManaged(ViewGroup *this, struct IApplicationView *a2)
{
  bool v2; // bl
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = *v3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, GUID *, __int64 *))(v4 + 64))(
         v3,
         a2,
         &GUID_f264283f_b510_4555_80ed_4c7216018854,
         &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      726LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( v10 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 160LL))(v10, &v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        730LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v2 = v9 != 0;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return v2;
}
