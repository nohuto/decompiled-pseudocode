/*
 * XREFs of _lambda_0c9591b3b7af47026ef620a0b989ad73_::operator() @ 0x1801D621C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73___::Run @ 0x1801E47B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BG@$$CBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAY0BG@$$CBDAEAPEAUHWND__@@AEBJ@Z @ 0x1801CE5F4 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BG@$$CBDAEAPEAUHWND__@@AEBJ@TabView.c)
 *     ?CancelTabTransfer@TabViewManager@@UEAAJU_GUID@@@Z @ 0x1801D89F0 (-CancelTabTransfer@TabViewManager@@UEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_0c9591b3b7af47026ef620a0b989ad73_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _GUID v7; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = CoreQueryWindowService(*(_QWORD *)(a1 + 40), &unk_1804774C0, &GUID_82c021b7_aaf4_48fd_98d2_8c3cc38e2558, &v10);
  if ( v9 < 0 )
  {
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const (&)[22],HWND__ * &,long const &>(
      v2,
      (HWND *)(a1 + 40),
      &v9);
    goto LABEL_9;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v10 + 80LL))(
         v10,
         0LL,
         *(_QWORD *)(a1 + 16),
         &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( (_BYTE)v9 )
    {
      v7 = *(struct _GUID *)(a1 + 24);
      v3 = TabViewManager::CancelTabTransfer((TabViewManager *)(*(_QWORD *)a1 + 152LL), &v7);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1466LL;
        goto LABEL_7;
      }
    }
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  v5 = 1461LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return v4;
}
