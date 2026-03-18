/*
 * XREFs of __report_rangecheckfailure @ 0x140268CCC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400A62E0 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x1401779A0 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1401973E0 (strspn.c)
 *     strtok_s @ 0x14019BA30 (strtok_s.c)
 *     SepParseElamCertResources @ 0x14073C648 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x14073EF20 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140743868 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313D8 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1408957B0 (RtlUnicodeStringToInt64.c)
 *     LocalGetStringForControl @ 0x1408A61B0 (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x1408DC0DC (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x1408FD578 (_CmGetDeviceChildren.c)
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
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
