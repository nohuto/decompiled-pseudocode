/*
 * XREFs of ViDeadlockUpdateChildrenCount @ 0x14093EE10
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     ViDeadlockMergeNodes @ 0x14093E514 (ViDeadlockMergeNodes.c)
 *     ViDeadlockRemoveNode @ 0x14093E814 (ViDeadlockRemoveNode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ViDeadlockUpdateChildrenCount(__int64 *a1, int a2)
{
  int v2; // r8d
  PVOID result; // rax

  do
  {
    v2 = a2 + *((_DWORD *)a1 + 19);
    *((_DWORD *)a1 + 19) = v2;
    a1 = (__int64 *)*a1;
  }
  while ( a1 );
  result = ViDeadlockGlobals;
  if ( v2 > *((_DWORD *)ViDeadlockGlobals + 8282) )
    *((_DWORD *)ViDeadlockGlobals + 8282) = v2;
  return result;
}
