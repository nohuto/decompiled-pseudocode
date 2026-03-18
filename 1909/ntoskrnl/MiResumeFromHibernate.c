/*
 * XREFs of MiResumeFromHibernate @ 0x140169FF4
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14016A014 (MiIterateOverPartitions.c)
 */

__int64 __fastcall MiResumeFromHibernate(unsigned int a1)
{
  return MiIterateOverPartitions(MiResumeMarkPageLists, a1);
}
