/*
 * XREFs of _lambda_37719fec74321e5ebed3721a062c5e83_::operator() @ 0x1802045C0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_d508be5c64e0ff92f4e528825b57647a___::Invoke @ 0x180204E00 (CAsyncCallbackWithLambda__lambda_d508be5c64e0ff92f4e528825b57647a___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18020552C (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_37719fec74321e5ebed3721a062c5e83_::operator()(unsigned int **a1)
{
  const char *v2; // r9
  __int64 v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  WindowGroupManager::TryGetWindowGroupById(*a1, &v10, *a1[1]);
  v3 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      132LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
      v2);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
  {
    v4 = (__int64 *)*((_QWORD *)*a1 + 12);
    v5 = *v4;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, int))(v5 + 40))(v4, *a1[1], v6, 0LL, 2);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        138LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
  return 0LL;
}
