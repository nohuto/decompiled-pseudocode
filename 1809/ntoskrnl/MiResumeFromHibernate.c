/*
 * XREFs of MiResumeFromHibernate @ 0x140152880
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x1401528A0 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
