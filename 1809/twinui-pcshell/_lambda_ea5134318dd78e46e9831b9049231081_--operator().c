/*
 * XREFs of _lambda_ea5134318dd78e46e9831b9049231081_::operator() @ 0x18024D794
 * Callers:
 *     wil::details::ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___::_ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___ @ 0x18024D318 (wil--details--ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___--_ScopeExitFn__lambda_ea51.c)
 *     _lambda_41ea728de8cee2282d4ec3314b3d541b_::operator() @ 0x18024D338 (_lambda_41ea728de8cee2282d4ec3314b3d541b_--operator().c)
 * Callees:
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180069AFC (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_ea5134318dd78e46e9831b9049231081_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 184LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 288LL),
    &SRWLock);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
