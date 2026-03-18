/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14013BBD0
 * Callers:
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_14043AF88;
}
