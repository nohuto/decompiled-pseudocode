/*
 * XREFs of _lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator() @ 0x1802932D8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___::_ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___ @ 0x180292F60 (wil--details--ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___--_ScopeExitFn__lambda_9ec5.c)
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x180292FB0 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 * Callees:
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298948 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 176LL) + 280LL);
  AcquireSRWLockExclusive(v2);
  ViewWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
