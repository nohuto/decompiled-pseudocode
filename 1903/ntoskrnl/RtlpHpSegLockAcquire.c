/*
 * XREFs of RtlpHpSegLockAcquire @ 0x14001F398
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x14001EDE0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14010B040 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2, __int64 a3)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1, a3);
  return result;
}
