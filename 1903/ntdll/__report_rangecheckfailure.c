/*
 * XREFs of __report_rangecheckfailure @ 0x18008C950
 * Callers:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     strcspn @ 0x180091270 (strcspn.c)
 *     strpbrk @ 0x1800917F0 (strpbrk.c)
 *     strspn @ 0x1800918E0 (strspn.c)
 *     strtok_s @ 0x180097E80 (strtok_s.c)
 *     sub_1800F70E4 @ 0x1800F70E4 (sub_1800F70E4.c)
 * Callees:
 *     __report_securityfailure @ 0x18008C96C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
