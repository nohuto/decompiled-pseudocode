/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x1402B97DC
 * Callers:
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

__int64 __fastcall MiFinishHoldingDirtyFaults(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
LABEL_9:
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v5, v6, v7);
  v10 = a1 + 4;
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_QWORD *)v11[1] != v10 )
      goto LABEL_9;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_9;
    *v10 = v12;
    *(_QWORD *)(v12 + 8) = v10;
    KeSetEvent((PRKEVENT)(v11 + 2), 0, 0);
  }
}
