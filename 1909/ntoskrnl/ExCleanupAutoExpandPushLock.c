/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14008E890
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14016E9C0 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x140895E88 (MiDeleteAweInfo.c)
 * Callees:
 *     ExpFreeFannedOutPushLock @ 0x14016E9E4 (ExpFreeFannedOutPushLock.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExpFreeFannedOutPushLock((unsigned int)result & 0xFFFFFFF8);
  return result;
}
