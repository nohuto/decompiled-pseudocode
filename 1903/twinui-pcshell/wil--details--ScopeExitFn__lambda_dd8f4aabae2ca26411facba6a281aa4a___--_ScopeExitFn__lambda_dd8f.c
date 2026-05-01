/*
 * XREFs of wil::details::ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___::_ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___ @ 0x18020D1C0
 * Callers:
 *     _Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::dtor$0 @ 0x18020E469 (_Windows--Internal--ComposableShell--TreeNodeBase--AddChild_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator() @ 0x18020DA50 (_lambda_dd8f4aabae2ca26411facba6a281aa4a_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___::_ScopeExitFn__lambda_dd8f4aabae2ca26411facba6a281aa4a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()();
  }
  return result;
}
