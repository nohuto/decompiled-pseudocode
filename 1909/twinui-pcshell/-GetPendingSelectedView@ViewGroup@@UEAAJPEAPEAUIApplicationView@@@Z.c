/*
 * XREFs of ?GetPendingSelectedView@ViewGroup@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18027EC50
 * Callers:
 *     <none>
 * Callees:
 *     ??$try_copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEBA_NPEAPEAUIApplicationView@@@Z @ 0x18027D97C (--$try_copy_to@UIApplicationView@@@-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroup::GetPendingSelectedView(ViewGroup *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)((char *)this + 168);
  AcquireSRWLockShared((PSRWLOCK)this + 21);
  try
  {
    wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::try_copy_to<IApplicationView>((__int64 *)this + 25, a2);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x198,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v5);
  }
  return result;
}
