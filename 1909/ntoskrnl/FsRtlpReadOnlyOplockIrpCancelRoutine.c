/*
 * XREFs of FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x140283A00
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1402835B0 (FsRtlpCancelReadOnlyOplockIrp.c)
 */

void __fastcall FsRtlpReadOnlyOplockIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelReadOnlyOplockIrp(a2, 0);
}
