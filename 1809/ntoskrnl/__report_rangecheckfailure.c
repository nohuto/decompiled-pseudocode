/*
 * XREFs of __report_rangecheckfailure @ 0x140268DCC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6300 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x1401779C0 (LdrpGetResourceFileName.c)
 *     strspn @ 0x140197400 (strspn.c)
 *     strtok_s @ 0x14019BA50 (strtok_s.c)
 *     SepParseElamCertResources @ 0x14073C628 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x14073EF00 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140743848 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407441A0 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313B8 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x140895790 (RtlUnicodeStringToInt64.c)
 *     LocalGetStringForControl @ 0x1408A6190 (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x1408DC0BC (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x1408FD558 (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140926214 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x14094D0C0 (HdlspPutWideString.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     IopInitializeResourceMap @ 0x1409C0C58 (IopInitializeResourceMap.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C1174 (IopInitCrashDumpDuringSysInit.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C1D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1409C22E8 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
