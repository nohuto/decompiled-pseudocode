/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1400AD870
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14016E2D0 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x140896668 (MiDeleteAweInfo.c)
 * Callees:
 *     ExpFreeFannedOutPushLock @ 0x14016E2F4 (ExpFreeFannedOutPushLock.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExpFreeFannedOutPushLock((unsigned int)result & 0xFFFFFFF8);
  return result;
}
