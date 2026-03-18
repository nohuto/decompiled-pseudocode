/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1402DE9B4
 * Callers:
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140072660 (MiIncrementSubsectionViewCount.c)
 *     MiAppendSubsectionChain @ 0x140089058 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     MiConvertStaticSubsections @ 0x1401254E0 (MiConvertStaticSubsections.c)
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
