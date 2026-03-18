/*
 * XREFs of HvipApertureDetectParameters @ 0x14031B3A8
 * Callers:
 *     HviEnterKernelAperture @ 0x14031B300 (HviEnterKernelAperture.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x14018F540 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 */

char HvipApertureDetectParameters()
{
  bool v0; // di
  char v5; // si
  char v11; // bl
  char v13; // [rsp+28h] [rbp-48h]
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-20h] BYREF

  v0 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v5 = 1, (_DWORD)_RCX != 1818588270) )
    v5 = 0;
  v13 = 0;
  v14[0] = 0LL;
  v14[1] = 0LL;
  HviGetHypervisorFeatures(v14);
  _RAX = v14[0] >> 44;
  if ( (v14[0] & 0x100000000000LL) != 0 )
  {
    LOBYTE(_RAX) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)_RAX )
    {
      _RAX = 1073741831LL;
      __asm { cpuid }
      v13 = _RCX;
    }
  }
  if ( (v13 & 1) != 0 )
  {
    v11 = 0;
    LOBYTE(_RAX) = HviGetHardwareFeatures(v15);
    v0 = (v15[0] & 0x8000) != 0;
  }
  else
  {
    v11 = 1;
  }
  byte_14050EC6C = v5;
  byte_14042B72A = v11;
  byte_14050EC6E = v0;
  byte_14050EC6D = 1;
  return _RAX;
}
