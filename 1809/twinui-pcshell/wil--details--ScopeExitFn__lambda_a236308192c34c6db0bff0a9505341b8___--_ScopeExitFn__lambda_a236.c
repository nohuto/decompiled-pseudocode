/*
 * XREFs of wil::details::ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___::_ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___ @ 0x180211624
 * Callers:
 *     __lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator()_::_1_::dtor$1 @ 0x180212ADA (__lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1802103C0 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 */

TLG_STATUS __fastcall wil::details::ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___::_ScopeExitFn__lambda_a236308192c34c6db0bff0a9505341b8___(
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
