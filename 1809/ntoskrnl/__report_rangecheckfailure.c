/*
 * XREFs of __report_rangecheckfailure @ 0x140268FBC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     LdrpGetResourceFileName @ 0x140177AC0 (LdrpGetResourceFileName.c)
 *     strspn @ 0x140197540 (strspn.c)
 *     strtok_s @ 0x14019BB90 (strtok_s.c)
 *     SepParseElamCertResources @ 0x14073D818 (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x1407400F0 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140744A38 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140745390 (WdipSemLoadNextScenario.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x140832618 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1408969F0 (RtlUnicodeStringToInt64.c)
 *     LocalGetStringForControl @ 0x1408A73F0 (LocalGetStringForControl.c)
 *     WheapApplyPolicyChanges @ 0x1408DD37C (WheapApplyPolicyChanges.c)
 *     _CmGetDeviceChildren @ 0x1408FE818 (_CmGetDeviceChildren.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140927214 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x14094E0C0 (HdlspPutWideString.c)
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     IopInitializeResourceMap @ 0x1409C1C58 (IopInitializeResourceMap.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C2174 (IopInitCrashDumpDuringSysInit.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x1409C32E8 (CmpSetupConfigurationTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CE3F0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
