/*
 * XREFs of WerpFreeSid @ 0x1800DCB18
 * Callers:
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DC808 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
