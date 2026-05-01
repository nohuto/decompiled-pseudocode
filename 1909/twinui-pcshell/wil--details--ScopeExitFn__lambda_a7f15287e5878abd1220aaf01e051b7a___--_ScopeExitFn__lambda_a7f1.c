/*
 * XREFs of wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x18042FC5C
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$0 @ 0x1800E4EDC (_CSingleViewShellExperience--Hide_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x180013C48 (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()((CSingleViewShellExperience **)a1);
  }
}
