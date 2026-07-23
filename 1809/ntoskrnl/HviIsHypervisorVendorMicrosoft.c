/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140186510
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4DE8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1402FC9F4 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x140322500 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1409D2A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
