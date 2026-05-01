/*
 * XREFs of _RmActivityImportanceTakeMostImportant@12 @ 0x100112B0
 * Callers:
 *     <none>
 * Callees:
 *     _RmpActivityImportanceMergeVectors@8 @ 0x10015339 (_RmpActivityImportanceMergeVectors@8.c)
 */

int __stdcall RmActivityImportanceTakeMostImportant(int a1, int a2, _DWORD *a3)
{
  *a3 = RmpActivityImportanceMergeVectors(a1, a2);
  return 0;
}
