/*
 * XREFs of ViDeadlockSimilarNodes @ 0x14097D1D4
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x14097C3F4 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x14097C474 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViDeadlockSimilarNodes(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) && ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(a1 + 72)) & 2) == 0;
}
