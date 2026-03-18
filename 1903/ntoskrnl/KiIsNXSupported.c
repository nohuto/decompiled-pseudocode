/*
 * XREFs of KiIsNXSupported @ 0x1405A30FC
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140A20A8C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x14059DB44 (KiGetCpuVendor.c)
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
