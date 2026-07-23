/*
 * XREFs of KiIsNXSupported @ 0x1405705E0
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x1409B0820 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  bool v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  LODWORD(_RDX) = _RDX & 0x100000;
  v5 = (_DWORD)_RDX != 0;
  if ( (_DWORD)_RDX )
    return v5;
  v7 = (unsigned int)KiGetCpuVendor(_RCX) == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
