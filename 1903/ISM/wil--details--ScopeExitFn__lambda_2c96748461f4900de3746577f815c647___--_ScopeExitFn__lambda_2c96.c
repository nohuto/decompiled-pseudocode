/*
 * XREFs of wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18008BE90
 * Callers:
 *     _MPCCursorManager::ProcessProviderHitTest_::_1_::dtor$0 @ 0x18008C3D0 (_MPCCursorManager--ProcessProviderHitTest_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x18008BEB0 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return lambda_2c96748461f4900de3746577f815c647_::operator()();
  }
  return result;
}
