/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14013BCF0
 * Callers:
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_14043C048;
}
