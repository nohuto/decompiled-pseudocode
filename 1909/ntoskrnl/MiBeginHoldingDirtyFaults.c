/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x1402CF3EC
 * Callers:
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 * Callees:
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = a1 + 24;
  v12 = *(_QWORD **)(v11 + 8);
  if ( *v12 != v11 )
    __fastfail(3u);
  a2[1] = v12;
  LOBYTE(v8) = v7;
  *a2 = v11;
  *v12 = a2;
  *(_QWORD *)(v11 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v8, v9, v10);
  return MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0);
}
