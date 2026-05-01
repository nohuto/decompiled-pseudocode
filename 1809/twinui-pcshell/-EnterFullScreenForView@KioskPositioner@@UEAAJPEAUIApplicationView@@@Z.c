/*
 * XREFs of ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180097A50
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x180096814 (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x180097BE4 (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::EnterFullScreenForView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID v6; // [rsp+40h] [rbp+8h]
  struct IApplicationView *v7; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  v7 = a2;
  v2 = this + 60;
  wil::srwlock::lock_exclusive(this + 63, &SRWLock);
  try
  {
    ApplicationViewCollection::FindView(v2);
    if ( v6 == v2[1].Ptr )
      std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
        (__int64)v2,
        (__int64 *)&v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x37C,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
