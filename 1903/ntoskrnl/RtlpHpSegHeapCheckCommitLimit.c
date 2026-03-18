/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x1401108A8
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140021F3C (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, unsigned __int64 *a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (a2[12] + a2[17]) << 12, (int)a2, a2 + 4);
}
