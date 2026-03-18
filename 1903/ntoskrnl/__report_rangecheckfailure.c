/*
 * XREFs of __report_rangecheckfailure @ 0x14027BD8C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x14017FB10 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1401A1C00 (strspn.c)
 *     strtok_s @ 0x1401A62C0 (strtok_s.c)
 *     LocalGetStringForControl @ 0x1405B2660 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x1407646CC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140766B70 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x14076B788 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086BD98 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1408D36C0 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x14091A384 (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x14093B50C (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x1409646B4 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x14098D0EC (HdlspPutWideString.c)
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F476C (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1409F4CB8 (IopInitializeResourceMap.c)
 *     KsepMatchInitBiosInfo @ 0x140A02640 (KsepMatchInitBiosInfo.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140A0BF08 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13344 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
