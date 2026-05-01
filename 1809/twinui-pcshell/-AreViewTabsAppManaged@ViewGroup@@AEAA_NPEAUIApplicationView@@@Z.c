/*
 * XREFs of ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x180206724
 * Callers:
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180206300 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewGroup::AreViewTabsAppManaged(ViewGroup *this, struct IApplicationView *a2)
{
  __int64 v2; // rcx
  bool v3; // bl
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 12);
  v3 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v2 + 56LL))(
         v2,
         a2,
         &GUID_f264283f_b510_4555_80ed_4c7216018854,
         &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      629LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( v9 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 160LL))(v9, &v8);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        633LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v3 = v8 != 0;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  return v3;
}
