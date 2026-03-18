/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14017E808
 * Callers:
 *     VfTargetDriversRemove @ 0x14017E660 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140973968 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140973E10 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14097E9CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14097F100 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14097F76C (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140154708 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14015473C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140154794 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1401547CC (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x14015486C (ViAvlNodeInitializeSessionId.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  ViAvlNodeInitializeSessionId(a1, (__int64)&Buffer);
  ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + v7 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
