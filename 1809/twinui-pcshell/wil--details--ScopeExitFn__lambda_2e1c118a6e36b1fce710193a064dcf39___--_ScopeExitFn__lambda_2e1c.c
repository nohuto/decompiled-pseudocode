/*
 * XREFs of wil::details::ScopeExitFn__lambda_2e1c118a6e36b1fce710193a064dcf39___::_ScopeExitFn__lambda_2e1c118a6e36b1fce710193a064dcf39___ @ 0x18027E344
 * Callers:
 *     __lambda_33af26c9d846f3b9c507d9b825ceee74_::operator()_::_1_::dtor$22 @ 0x18027F048 (__lambda_33af26c9d846f3b9c507d9b825ceee74_--operator()_--_1_--dtor$22.c)
 * Callees:
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x18028FDF8 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_2e1c118a6e36b1fce710193a064dcf39___::_ScopeExitFn__lambda_2e1c118a6e36b1fce710193a064dcf39___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return XamlAltTabViewController::UnregisterForEvents(**(_QWORD **)a1);
  }
  return result;
}
