/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140190440
 * Callers:
 *     HvipApertureDetectParameters @ 0x14031ADF8 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1403437A0 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A16090 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
