/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C000C964
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000C9C0 (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C001CD84 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C001D178 (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
