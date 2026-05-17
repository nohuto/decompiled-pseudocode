/*
 * XREFs of __report_rangecheckfailure @ 0x18008CFF0
 * Callers:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     strcspn @ 0x180091910 (strcspn.c)
 *     strpbrk @ 0x180091E90 (strpbrk.c)
 *     strspn @ 0x180091F80 (strspn.c)
 *     strtok_s @ 0x180098520 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800F71C4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008D00C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
