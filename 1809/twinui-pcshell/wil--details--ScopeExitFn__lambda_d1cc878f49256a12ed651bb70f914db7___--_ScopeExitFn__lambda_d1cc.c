/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18025EAE0
 * Callers:
 *     __lambda_e8537fd42700b698b39adf2393712a09_::operator()_::_1_::dtor$0 @ 0x18025F251 (__lambda_e8537fd42700b698b39adf2393712a09_--operator()_--_1_--dtor$0.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$6 @ 0x18025F85C (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18025EE84 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()();
  }
  return lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1);
}
