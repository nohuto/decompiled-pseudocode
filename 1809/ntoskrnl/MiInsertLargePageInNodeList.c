/*
 * XREFs of MiInsertLargePageInNodeList @ 0x140028C1C
 * Callers:
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiEnableNewPfns @ 0x1402A6418 (MiEnableNewPfns.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1402C5CE0 (MiInsertUnusedLargePageInNodeList.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 */

__int64 __fastcall MiInsertLargePageInNodeList(ULONG_PTR a1)
{
  return MiInsertLargePageInNodeListHelper(a1);
}
