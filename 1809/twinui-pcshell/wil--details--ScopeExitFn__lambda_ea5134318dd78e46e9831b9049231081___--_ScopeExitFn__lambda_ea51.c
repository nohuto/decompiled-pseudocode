/*
 * XREFs of wil::details::ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___::_ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___ @ 0x18024D318
 * Callers:
 *     __lambda_41ea728de8cee2282d4ec3314b3d541b_::operator()_::_1_::dtor$0 @ 0x18024D67A (__lambda_41ea728de8cee2282d4ec3314b3d541b_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_ea5134318dd78e46e9831b9049231081_::operator() @ 0x18024D794 (_lambda_ea5134318dd78e46e9831b9049231081_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___::_ScopeExitFn__lambda_ea5134318dd78e46e9831b9049231081___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_ea5134318dd78e46e9831b9049231081_::operator()();
  }
  return result;
}
