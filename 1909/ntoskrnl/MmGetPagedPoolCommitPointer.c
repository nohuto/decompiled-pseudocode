/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14013DD34
 * Callers:
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_1404666A8;
}
