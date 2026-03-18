/*
 * XREFs of PnpBuildRemovalRelationList @ 0x1406EF2F4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     IopAllocateRelationList @ 0x1406EE99C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1406EEA5C (IopFreeRelationList.c)
 *     IopSortRelationListForRemove @ 0x1406EF11C (IopSortRelationListForRemove.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  _BYTE *BugCheckParameter3; // rax
  _QWORD *v10; // rbx
  int v11; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2LL, a3, (ULONG_PTR)BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a4 = v10;
    IopSortRelationListForRemove((__int64)v10);
  }
  return (unsigned int)v11;
}
