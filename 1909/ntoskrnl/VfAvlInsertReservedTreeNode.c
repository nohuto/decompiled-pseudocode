/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x140154D0C
 * Callers:
 *     VfTargetDriversAdd @ 0x140154BD8 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409738E4 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140973AD0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140154DA8 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140154DDC (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140154E34 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140154E6C (ViAvlTableIndex.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r10
  __int64 v7; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v7 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
}
