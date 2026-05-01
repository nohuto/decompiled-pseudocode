/*
 * XREFs of _lambda_1fe5aa9170e8b09fee4721af7812a3aa_::operator() @ 0x1801D6300
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe5aa9170e8b09fee4721af7812a3aa___::Run @ 0x1801E47C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1fe5aa9170e8b09fee4721af7812a3aa___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BD@$$CBDAEBQEAUHWND__@@AEAJ@TabViewManagerTraceLogging@@SAXAEAY0BD@$$CBDAEBQEAUHWND__@@AEAJ@Z @ 0x1801CE540 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BD@$$CBDAEBQEAUHWND__@@AEAJ@TabView.c)
 */

__int64 __fastcall lambda_1fe5aa9170e8b09fee4721af7812a3aa_::operator()(HWND *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = CoreQueryWindowService(*a1, &unk_1804774C0, &GUID_82c021b7_aaf4_48fd_98d2_8c3cc38e2558, &v7);
  if ( v6 < 0 )
  {
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const (&)[19],HWND__ * const &,long &>(
      v2,
      a1,
      &v6);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3799LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
  return 0LL;
}
