/*
 * XREFs of ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x180140DC4
 * Callers:
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180140EF8 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x180140E18 (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 */

void __fastcall ISMTracing::MPCPerfCounter_ReportPerf<unsigned long &,unsigned int &,float &>(
        unsigned int *a1,
        unsigned int *a2,
        float *a3)
{
  __int64 v6; // rcx
  ISMTracing *v7; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v6, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCPerfCounter_ReportPerf_(v7, *a1, *a2, *a3);
  }
}
