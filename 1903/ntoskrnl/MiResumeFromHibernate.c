/*
 * XREFs of MiResumeFromHibernate @ 0x140160420
 * Callers:
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x140160440 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
