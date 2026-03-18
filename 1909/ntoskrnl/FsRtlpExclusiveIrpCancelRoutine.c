/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x140283760
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x140283498 (FsRtlpCancelExclusiveIrp.c)
 */

void __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelExclusiveIrp(a2, 0, 1);
}
