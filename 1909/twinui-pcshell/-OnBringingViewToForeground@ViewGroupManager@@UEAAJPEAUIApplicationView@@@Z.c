/*
 * XREFs of ?OnBringingViewToForeground@ViewGroupManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18026CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18026CA4C (-GetViewGroup@ViewGroupManager@@AEAA-AV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroupManager::OnBringingViewToForeground(ViewGroupManager *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this - 8);
  try
  {
    ViewGroupManager::GetViewGroup(v3, &v8, (__int64)a2);
    if ( v8 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v8 + 120LL))(v8, a2);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          134LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v4);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v5);
  }
  return result;
}
