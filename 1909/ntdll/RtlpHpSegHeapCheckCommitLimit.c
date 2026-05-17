/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x180050C78
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 *a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (a2[12] + a2[17]) << 12, (int)a2, a2 + 4);
}
