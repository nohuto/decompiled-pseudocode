/*
 * XREFs of _lambda_dcd33132cfc5331c9f72d584591af3f1_::operator() @ 0x1802A6738
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dcd33132cfc5331c9f72d584591af3f1___::Run @ 0x1802A79F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_dcd33132cfc5331c9f72d584591af3f1___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009B660 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_dcd33132cfc5331c9f72d584591af3f1_::operator()(unsigned int **a1)
{
  _QWORD *v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = *a1 + 82;
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
      v2,
      (__int64)&v7);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, *a1[1]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1360LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x552,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
