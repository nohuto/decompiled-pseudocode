/*
 * XREFs of _lambda_949fe609b6a62f11a040d453caf9e427_::operator() @ 0x1801D6E1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_949fe609b6a62f11a040d453caf9e427___::Run @ 0x1801E4810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_949fe609b6a62f11a040d453caf9e427___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0DK@$$CBDAEBQEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAY0DK@$$CBDAEBQEAUHWND__@@AEBJ@Z @ 0x1801CE810 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0DK@$$CBDAEBQEAUHWND__@@AEBJ@TabView.c)
 */

__int64 __fastcall lambda_949fe609b6a62f11a040d453caf9e427_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = CoreQueryWindowService(*(_QWORD *)(a1 + 16), &unk_1804774C0, &GUID_82c021b7_aaf4_48fd_98d2_8c3cc38e2558, &v8);
  if ( v7 < 0 )
  {
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const (&)[58],HWND__ * const &,long const &>(
      v2,
      (HWND *)(a1 + 16),
      &v7);
  }
  else
  {
    v5 = *(_OWORD *)(a1 + 24);
    v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 56LL))(v8, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1899LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
  return 0LL;
}
