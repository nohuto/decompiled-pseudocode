/*
 * XREFs of ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180057810
 * Callers:
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x180057950 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x1800943F0 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800986C8 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D900 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 */

char __fastcall ISMTracing::IsVerboseEnabled(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  char v2; // dl

  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        a1,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 <= 5u || !TlgKeywordOn(v1, 1uLL) )
    return 0;
  return v2;
}
