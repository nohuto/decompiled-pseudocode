/*
 * XREFs of __report_rangecheckfailure @ 0x14027BAEC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140180200 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1401A2320 (strspn.c)
 *     strtok_s @ 0x1401A69E0 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1405B2A3C (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x1407691CC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x14076B670 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x14076E5DC (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086B498 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1408D2FC0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140919DE4 (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x14093AF7C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409646B4 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x14098D0EC (HdlspPutWideString.c)
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F467C (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1409F4BC8 (IopInitializeResourceMap.c)
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A0C434 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
