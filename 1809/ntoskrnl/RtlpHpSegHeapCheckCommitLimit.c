/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x14000C51C
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
