/*
 * XREFs of KiSetCacheInformationIntel @ 0x1405A2120
 * Callers:
 *     KiSetCacheInformation @ 0x1405A2030 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x1405A217C (KiSetStandardizedCacheInformation.c)
 */

__int64 KiSetCacheInformationIntel()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  CurrentPrcb->CacheCount = 0;
  __asm { cpuid }
  result = (unsigned int)(_RAX - 3);
  if ( (unsigned int)result <= 0x7FFFFFFC )
    return KiSetStandardizedCacheInformation(CurrentPrcb, 4LL);
  return result;
}
