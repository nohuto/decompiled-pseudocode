/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x14010FF6C
 * Callers:
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
