/*
 * XREFs of MiRemoveUserPhysicalPagesView @ 0x1408513A4
 * Callers:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B06EC (SeFreeCapturedObjectTypeList.c)
 *     MiLocatePhysicalViewInTree @ 0x1402B1434 (MiLocatePhysicalViewInTree.c)
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B22FC (MiUnlockAweVadsExclusive.c)
 */

unsigned __int64 __fastcall MiRemoveUserPhysicalPagesView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  unsigned __int64 *PhysicalViewInTree; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 0x20000) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)&CurrentThread->ApcState.Process[1].IdealGlobalNode;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
                         (_QWORD *)(v4 + 352));
  RtlAvlRemoveNode((unsigned __int64 *)(v4 + 352), PhysicalViewInTree);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
  v6 = (void *)PhysicalViewInTree[5];
  v7 = PhysicalViewInTree[4];
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x68506D4Du);
  PhysicalViewInTree[2] = 0LL;
  SeFreeCapturedObjectTypeList(PhysicalViewInTree);
  return v7;
}
