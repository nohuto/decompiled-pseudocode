/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800DC808
 * Callers:
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     WerpFreeSid @ 0x1800DCB18 (WerpFreeSid.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  if ( a11 )
    return (unsigned int)ZwAllocateVirtualMemory();
  else
    return 3221225485LL;
}
