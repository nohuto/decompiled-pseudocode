/*
 * XREFs of sub_1800DC748 @ 0x1800DC748
 * Callers:
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DCA58 @ 0x1800DCA58 (sub_1800DCA58.c)
 */

__int64 __fastcall sub_1800DC748(
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
