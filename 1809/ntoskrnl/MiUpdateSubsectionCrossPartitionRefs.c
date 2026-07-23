/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1402C4F10
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiConvertStaticSubsections @ 0x14007BCC4 (MiConvertStaticSubsections.c)
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
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
