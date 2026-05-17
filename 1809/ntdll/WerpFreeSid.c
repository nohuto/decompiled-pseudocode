/*
 * XREFs of WerpFreeSid @ 0x1800DEE5C
 * Callers:
 *     SendMessageToWERService @ 0x1800DE71C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DEB38 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
