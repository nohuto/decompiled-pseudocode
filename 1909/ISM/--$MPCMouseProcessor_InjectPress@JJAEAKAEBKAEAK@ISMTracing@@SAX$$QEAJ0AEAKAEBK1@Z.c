/*
 * XREFs of ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x180139C4C
 * Callers:
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18013A210 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x18013B054 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_InjectPress<long,long,unsigned long &,unsigned long const &,unsigned long &>(
        int *a1,
        int *a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  ISMTracing *v10; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v9, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCMouseProcessor_InjectPress_(v10, *a1, *a2, *a3, *a4, *a5);
  }
}
