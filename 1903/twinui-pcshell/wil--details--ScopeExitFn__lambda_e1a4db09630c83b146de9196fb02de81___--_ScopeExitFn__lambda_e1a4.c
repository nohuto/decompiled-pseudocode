/*
 * XREFs of wil::details::ScopeExitFn__lambda_e1a4db09630c83b146de9196fb02de81___::_ScopeExitFn__lambda_e1a4db09630c83b146de9196fb02de81___ @ 0x180268DA0
 * Callers:
 *     __lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()_::_1_::dtor$1 @ 0x180269ADB (__lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x180267C18 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 */

TLG_STATUS __fastcall wil::details::ScopeExitFn__lambda_e1a4db09630c83b146de9196fb02de81___::_ScopeExitFn__lambda_e1a4db09630c83b146de9196fb02de81___(
        __int64 a1)
{
  TLG_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
  }
  return result;
}
