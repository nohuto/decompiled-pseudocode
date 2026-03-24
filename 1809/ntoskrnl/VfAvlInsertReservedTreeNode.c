/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1400F56D8
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F55A4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140934340 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140934520 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F5774 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F57A8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F5800 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F5838 (ViAvlTableIndex.c)
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
