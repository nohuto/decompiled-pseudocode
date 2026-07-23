/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x140008208
 * Callers:
 *     RtlpHpLargeAllocSize @ 0x1400080E4 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1402FE228 (RtlpHpLargeAllocSetExtraPresent.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 */

char __fastcall RtlpHpLargeLockAcquireShared(_DWORD *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockShared(a1 + 16, *a1 & 1);
}
