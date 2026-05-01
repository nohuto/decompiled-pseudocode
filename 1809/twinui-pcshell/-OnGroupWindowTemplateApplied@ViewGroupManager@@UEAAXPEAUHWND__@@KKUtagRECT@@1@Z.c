/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewGroupManager@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1801FAB10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicableViewGroup@ViewGroupManager@@AEAA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1801FA658 (-GetApplicableViewGroup@ViewGroupManager@@AEAA-AV-$com_ptr_t@UIViewGroupInternal@@Uerr_exception.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewGroupManager::OnGroupWindowTemplateApplied(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  PVOID Ptr; // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14[10]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v14[1] = -2LL;
  v13 = 0LL;
  Ptr = this[10].Ptr;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v13);
  try
  {
    (*(void (**)(void))(*(_QWORD *)Ptr + 48LL))();
    ViewGroupManager::GetApplicableViewGroup(this - 4, v14, v13, a2);
    if ( v14[0] )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, struct tagRECT *, struct tagRECT *))(*(_QWORD *)v14[0] + 96LL))(
              v14[0],
              v13,
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          216LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDB,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
      v12);
  }
}
