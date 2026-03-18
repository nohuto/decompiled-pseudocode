/*
 * XREFs of KiIsNXSupported @ 0x1405A30DC
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140A20C6C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x14059DB24 (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  char v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v7 = (unsigned int)KiGetCpuVendor() == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
