/*
 * XREFs of MiWaitForRotateToComplete @ 0x14013B138
 * Callers:
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8CD8 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v10; // rbx
  LONG *v12; // rbx
  LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = a2;
  v7 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[9]; i; i = (_QWORD *)*i )
  {
    v10 = i[1];
    if ( v7 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
      && v7 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v5;
      v5 = 1;
      if ( (*(_BYTE *)(v6 + 13) & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 36));
        LOBYTE(a2) = *(_BYTE *)(v6 + 12);
        MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], a2, (__int64)i, a4);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v10 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        MiUnlockAndDereferenceVadShared((char *)v10);
        SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(v6);
        v12 = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
        ExAcquireSpinLockExclusive(v12);
        v12[1] = 0;
        *(_BYTE *)(v6 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v5;
}
