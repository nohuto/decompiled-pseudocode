/*
 * XREFs of _lambda_75bf3f442c37a1ba04403cb499a5bf05_::operator() @ 0x1801D6B00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75bf3f442c37a1ba04403cb499a5bf05___::Run @ 0x1801E47F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75bf3f442c37a1ba04403cb499a5bf05___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BL@$$CBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAY0BL@$$CBDAEAPEAUHWND__@@AEBJ@Z @ 0x1801CE6A8 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BL@$$CBDAEAPEAUHWND__@@AEBJ@TabView.c)
 */

__int64 __fastcall lambda_75bf3f442c37a1ba04403cb499a5bf05_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = CoreQueryWindowService(*(_QWORD *)(a1 + 16), &unk_1804774C0, &GUID_82c021b7_aaf4_48fd_98d2_8c3cc38e2558, &v8);
  if ( v7 < 0 )
  {
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const (&)[27],HWND__ * &,long const &>(
      v2,
      (HWND *)(a1 + 16),
      &v7);
    goto LABEL_5;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)v8 + 80LL))(
         v8,
         2LL,
         *(_QWORD *)(a1 + 8),
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x612,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
  return v4;
}
