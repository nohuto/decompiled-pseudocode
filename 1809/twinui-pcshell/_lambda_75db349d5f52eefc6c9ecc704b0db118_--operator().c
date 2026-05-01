/*
 * XREFs of _lambda_75db349d5f52eefc6c9ecc704b0db118_::operator() @ 0x18023CDC0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___::_ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___ @ 0x18023CD70 (wil--details--ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___--_ScopeExitFn__lambda_75db.c)
 *     _lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator() @ 0x18023CE30 (_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator().c)
 * Callees:
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242888 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_75db349d5f52eefc6c9ecc704b0db118_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 176LL) + 296LL);
  AcquireSRWLockExclusive(v2);
  ViewWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
