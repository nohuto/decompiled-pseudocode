/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1401863B0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401B4C88 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1402FC704 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x140322210 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140176B90 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
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
