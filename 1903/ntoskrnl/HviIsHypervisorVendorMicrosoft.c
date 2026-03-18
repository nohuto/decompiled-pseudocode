/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x14018F540
 * Callers:
 *     HvipApertureDetectParameters @ 0x14031B3A8 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x140343D40 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A15EB0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
