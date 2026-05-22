/*
 * XREFs of ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x18012E5C4
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z @ 0x180130C34 (-MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
        unsigned int *a1,
        bool *a2,
        unsigned int *a3,
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
        float *a20,
        float *a21,
        _DWORD *a22)
{
  __int64 v26; // rcx
  ISMTracing *v27; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v26, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent_(
      v27,
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
      *a20,
      *a21,
      *a22);
  }
}
