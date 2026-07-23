/*
 * XREFs of HvipApertureDetectParameters @ 0x1402FC9F4
 * Callers:
 *     HviCopyMemory @ 0x1402FC8F4 (HviCopyMemory.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140186510 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140322540 (HviGetHardwareFeatures.c)
 */

char HvipApertureDetectParameters()
{
  bool v1; // di
  char v6; // si
  char v12; // cl
  char v13; // bl
  unsigned __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-20h] BYREF

  _RAX = 0LL;
  v1 = 0;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v6 = 1, (_DWORD)_RCX != 1818588270) )
    v6 = 0;
  HviGetHypervisorFeatures(&v15);
  _RAX = v15 >> 44;
  if ( (v15 & 0x100000000000LL) != 0 && (LOBYTE(_RAX) = HviIsHypervisorVendorMicrosoft(), (_BYTE)_RAX) )
  {
    _RAX = 1073741831LL;
    __asm { cpuid }
  }
  else
  {
    LOBYTE(_RCX) = 0;
  }
  v12 = _RCX & 1;
  v13 = v12 ^ 1;
  if ( !v12 )
  {
    LOBYTE(_RAX) = HviGetHardwareFeatures(v16);
    v1 = (v16[0] & 0x8000) != 0;
  }
  byte_1404E258C = v6;
  byte_1404062FD = v13;
  byte_1404E258E = v1;
  byte_1404E258D = 1;
  return _RAX;
}
