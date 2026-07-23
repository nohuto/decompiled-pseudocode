/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x1402B93B0
 * Callers:
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = a1 + 24;
  v11 = *(_QWORD **)(v10 + 8);
  if ( *v11 != v10 )
    __fastfail(3u);
  a2[1] = v11;
  *a2 = v10;
  *v11 = a2;
  *(_QWORD *)(v10 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v7, v8, v9);
  return MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0LL);
}
