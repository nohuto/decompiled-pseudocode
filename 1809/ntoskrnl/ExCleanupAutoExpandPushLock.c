/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1400917A0
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140167230 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x140850F50 (MiDeleteAweInfo.c)
 * Callees:
 *     ExpFreeFannedOutPushLock @ 0x140167254 (ExpFreeFannedOutPushLock.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExpFreeFannedOutPushLock((unsigned int)result & 0xFFFFFFF8);
  return result;
}
