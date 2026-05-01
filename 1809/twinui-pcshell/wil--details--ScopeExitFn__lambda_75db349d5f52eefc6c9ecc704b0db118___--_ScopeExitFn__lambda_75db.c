/*
 * XREFs of wil::details::ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___::_ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___ @ 0x18023CD70
 * Callers:
 *     __lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator()_::_1_::dtor$0 @ 0x18023D107 (__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_75db349d5f52eefc6c9ecc704b0db118_::operator() @ 0x18023CDC0 (_lambda_75db349d5f52eefc6c9ecc704b0db118_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___::_ScopeExitFn__lambda_75db349d5f52eefc6c9ecc704b0db118___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_75db349d5f52eefc6c9ecc704b0db118_::operator()();
  }
  return result;
}
