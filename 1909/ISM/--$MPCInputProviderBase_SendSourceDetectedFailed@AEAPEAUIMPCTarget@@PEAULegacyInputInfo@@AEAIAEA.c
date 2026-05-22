/*
 * XREFs of ??$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEAJ@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@AEAIAEAJ@Z @ 0x18013C9C8
 * Callers:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x18013E514 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@IJ@Z @ 0x18013DF14 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed<IMPCTarget * &,LegacyInputInfo *,unsigned int &,long &>(
        struct IMPCTarget **a1,
        struct InputInfo **a2,
        unsigned int *a3,
        int *a4)
{
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(v9, *a1, *a2, *a3, *a4);
  }
}
