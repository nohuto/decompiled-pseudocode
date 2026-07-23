/*
 * XREFs of MiWaitForRotateToComplete @ 0x140139D0C
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1402BF8B4 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v10; // rbx
  LONG *v12; // rbx
  LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
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
      if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 36));
        MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], *(_BYTE *)(a2 + 12), (__int64)i, a4);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v10 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x20u;
        MiUnlockAndDereferenceVadShared((char *)v10);
        SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(a2);
        v12 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
        ExAcquireSpinLockExclusive(v12);
        v12[1] = 0;
        *(_BYTE *)(a2 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v5;
}
