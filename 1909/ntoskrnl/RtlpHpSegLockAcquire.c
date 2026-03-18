/*
 * XREFs of RtlpHpSegLockAcquire @ 0x14001F788
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x14001F1D0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14010AC10 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2, __int64 a3)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1, a3);
  return result;
}
