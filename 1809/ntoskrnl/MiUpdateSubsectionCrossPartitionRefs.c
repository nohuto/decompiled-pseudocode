/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1402C4D20
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140077A50 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794C0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14007B7DC (MiInsertUnusedSubsection.c)
 *     MiConvertStaticSubsections @ 0x14007BCD4 (MiConvertStaticSubsections.c)
 *     MiAppendSubsectionChain @ 0x140092AA4 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
