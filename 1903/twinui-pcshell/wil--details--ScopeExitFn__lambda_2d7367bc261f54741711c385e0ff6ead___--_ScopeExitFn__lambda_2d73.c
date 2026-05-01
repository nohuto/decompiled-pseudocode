/*
 * XREFs of wil::details::ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___::_ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___ @ 0x1802A38D8
 * Callers:
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$0 @ 0x1802A3CA6 (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_2d7367bc261f54741711c385e0ff6ead_::operator() @ 0x1802A38F8 (_lambda_2d7367bc261f54741711c385e0ff6ead_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___::_ScopeExitFn__lambda_2d7367bc261f54741711c385e0ff6ead___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_2d7367bc261f54741711c385e0ff6ead_::operator()();
  }
  return result;
}
