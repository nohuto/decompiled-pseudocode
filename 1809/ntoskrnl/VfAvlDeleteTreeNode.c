/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14016C478
 * Callers:
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1409353B8 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140935854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140940860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F57F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F5828 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F5880 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F58B8 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F5958 (ViAvlNodeInitializeSessionId.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

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
