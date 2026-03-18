/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x1402D8E18
 * Callers:
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTagFromNode @ 0x14013CB90 (ExAllocatePoolWithTagFromNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rsi
  __int64 v5; // r14
  void *PoolWithTagFromNode; // rax
  LONG *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // r15
  LONG *SharedVm; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    SharedVm = MiGetSharedVm(a1);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    goto LABEL_10;
  }
  v4 = 0LL;
  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14];
  if ( !*(_QWORD *)(v5 + 608) )
  {
    PoolWithTagFromNode = (void *)ExAllocatePoolWithTagFromNode(0x200u, 0x800uLL, 0x6C53694Du, a3 | 0x80000000);
    v4 = PoolWithTagFromNode;
    if ( PoolWithTagFromNode )
      memset(PoolWithTagFromNode, 0, 0x800uLL);
  }
  v7 = MiGetSharedVm(a1);
  v8 = ExAcquireSpinLockExclusive(v7);
  v7[1] = 0;
  v12 = v8;
  if ( v4 )
  {
    if ( !*(_QWORD *)(v5 + 608) )
    {
      *(_QWORD *)(v5 + 608) = v4;
      return v12;
    }
    LOBYTE(v9) = v8;
    MiUnlockWorkingSetExclusive(a1, v9, v10, v11);
    ExFreePoolWithTag(v4, 0);
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusive(SharedVm);
LABEL_10:
    SharedVm[1] = 0;
  }
  return v12;
}
