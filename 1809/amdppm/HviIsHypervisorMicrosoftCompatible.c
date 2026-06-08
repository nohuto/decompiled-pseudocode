/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000C9C0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C000C964 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  bool IsAnyHypervisorPresent; // al
  int v1; // r8d

  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v1 = 0;
  if ( IsAnyHypervisorPresent )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    v1 = _RAX;
  }
  return v1 == 824407624;
}
