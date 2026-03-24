/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1401863D0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4CA8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1402FC804 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x140322310 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176BB0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
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
