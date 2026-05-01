/*
 * XREFs of wil::details::ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___::_ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___ @ 0x18021153C
 * Callers:
 *     __lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator()_::_1_::dtor$0 @ 0x180212ACE (__lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_3084357f003fe3e9c8b7927dc2a76ed2_::operator() @ 0x180212480 (_lambda_3084357f003fe3e9c8b7927dc2a76ed2_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___::_ScopeExitFn__lambda_3084357f003fe3e9c8b7927dc2a76ed2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_3084357f003fe3e9c8b7927dc2a76ed2_::operator()();
  }
  return result;
}
