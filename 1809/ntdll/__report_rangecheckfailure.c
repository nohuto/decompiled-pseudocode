/*
 * XREFs of __report_rangecheckfailure @ 0x180090070
 * Callers:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 *     strcspn @ 0x1800949E0 (strcspn.c)
 *     strpbrk @ 0x180094F60 (strpbrk.c)
 *     strspn @ 0x180095050 (strspn.c)
 *     strtok_s @ 0x18009B5E0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800F94A4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18009008C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
