/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x18026CE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicableViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUHWND__@@@Z @ 0x18026C8A0 (-GetApplicableViewGroup@ViewGroupManager@@AEAA-AV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewGroupManager::OnGroupWindowTemplateApplied(
        ViewGroupManager *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  void (*v10)(void); // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+48h] [rbp-50h] BYREF
  struct tagRECT *v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v16 = -2LL;
  v15 = a6;
  v13 = 0LL;
  v10 = *(void (**)(void))(**((_QWORD **)this + 10) + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v13);
  try
  {
    v10();
    ViewGroupManager::GetApplicableViewGroup((RTL_SRWLOCK *)this - 4, &v14, v13, a2);
    if ( v14 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, struct tagRECT *, struct tagRECT *))(*(_QWORD *)v14 + 96LL))(
              v14,
              v13,
              a2,
              a3,
              a4,
              a5,
              v15);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          230LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
      v12);
  }
}
