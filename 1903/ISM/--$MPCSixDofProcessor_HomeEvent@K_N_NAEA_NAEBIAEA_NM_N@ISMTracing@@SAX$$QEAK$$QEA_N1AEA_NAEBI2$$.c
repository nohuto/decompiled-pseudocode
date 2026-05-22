/*
 * XREFs of ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x18012E33C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036FB0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x180130B08 (-MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
        unsigned int *a1,
        bool *a2,
        bool *a3,
        bool *a4,
        _DWORD *a5,
        bool *a6,
        float *a7,
        bool *a8)
{
  __int64 v12; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v12, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeEvent_((ISMTracing *)(unsigned int)*a5, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
  }
}
