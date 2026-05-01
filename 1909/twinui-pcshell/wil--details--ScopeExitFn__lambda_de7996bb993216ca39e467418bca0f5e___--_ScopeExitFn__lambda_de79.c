/*
 * XREFs of wil::details::ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___::_ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___ @ 0x180288274
 * Callers:
 *     __lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()_::_1_::dtor$0 @ 0x180288F97 (__lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_de7996bb993216ca39e467418bca0f5e_::operator() @ 0x1802891B4 (_lambda_de7996bb993216ca39e467418bca0f5e_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___::_ScopeExitFn__lambda_de7996bb993216ca39e467418bca0f5e___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_de7996bb993216ca39e467418bca0f5e_::operator()();
  }
  return result;
}
