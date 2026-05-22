/*
 * XREFs of ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x18012E3E0
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801327D4 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x180130840 (-MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10,
        float *a11,
        float *a12,
        float *a13,
        float *a14,
        float *a15,
        float *a16,
        float *a17,
        float *a18,
        float *a19,
        _DWORD *a20)
{
  __int64 v24; // rcx
  ISMTracing *v25; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v24, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
      v25,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14,
      *a15,
      *a16,
      *a17,
      *a18,
      *a19,
      *a20);
  }
}
