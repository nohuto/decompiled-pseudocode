/*
 * XREFs of ?UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F95E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x1801F9500 (-UnregisterFromShellHooks@TitleBarController@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TitleBarController::UnsubscribeFromServices(RTL_SRWLOCK *this, struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 Ptr; // rax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  Ptr = (__int64)this[16].Ptr;
  this[16].Ptr = 0LL;
  v8 = Ptr;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  try
  {
    TitleBarController::UnregisterFromShellHooks(this - 1);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x210,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v5);
  }
  return result;
}
