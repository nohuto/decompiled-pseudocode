/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x14031BD00
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14031B9A0 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14031BAD8 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x14001DBB0 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
