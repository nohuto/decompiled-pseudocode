/*
 * XREFs of ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18012E584
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x180130A48 (-MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned int const &>(
        unsigned int *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(v5, *a1, *a2);
  }
}
