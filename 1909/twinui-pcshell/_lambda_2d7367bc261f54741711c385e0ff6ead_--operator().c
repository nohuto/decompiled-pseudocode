/*
 * XREFs of _lambda_2d7367bc261f54741711c385e0ff6ead_::operator() @ 0x1802C2E18
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___::_ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___ @ 0x1802C2DF8 (wil--details--ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___--_ScopeExitFn__lambda_2d73.c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802C2E84 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C66B0 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2d7367bc261f54741711c385e0ff6ead_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 296LL) + 192LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 296LL),
    &SRWLock);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
