/*
 * XREFs of MiRelockFaultState @ 0x1401023B0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1402D2C0C (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 v6; // r14
  unsigned __int64 valid; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v6 = MiLockWorkingSetShared(*(_QWORD *)a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v10);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    LOBYTE(valid) = MiUnlockWorkingSetShared(v2, v6);
    v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return valid;
}
