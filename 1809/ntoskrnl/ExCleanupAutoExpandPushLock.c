/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x140091860
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140167130 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x14084FCF0 (MiDeleteAweInfo.c)
 * Callees:
 *     ExpFreeFannedOutPushLock @ 0x140167154 (ExpFreeFannedOutPushLock.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExpFreeFannedOutPushLock((unsigned int)result & 0xFFFFFFF8);
  return result;
}
