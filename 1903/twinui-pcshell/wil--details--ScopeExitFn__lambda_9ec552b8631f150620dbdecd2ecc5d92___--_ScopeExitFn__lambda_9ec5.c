/*
 * XREFs of wil::details::ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___::_ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___ @ 0x180292F60
 * Callers:
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$0 @ 0x180293287 (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator() @ 0x1802932D8 (_lambda_9ec552b8631f150620dbdecd2ecc5d92_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___::_ScopeExitFn__lambda_9ec552b8631f150620dbdecd2ecc5d92___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator()();
  }
  return result;
}
