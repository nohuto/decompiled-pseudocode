/*
 * XREFs of pow @ 0x18003779C
 * Callers:
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E7D0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ??$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVCVolumeGainStage@@$$QEAPEBU_GUID@@AEAM$$QEAH$$QEA_N@Z @ 0x18000FC38 (--$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180020560 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180029A80 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18002B210 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
