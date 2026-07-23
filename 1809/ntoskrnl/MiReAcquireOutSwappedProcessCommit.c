/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 * Callees:
 *     KeFreezeProcess @ 0x140002940 (KeFreezeProcess.c)
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A418C (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  LONG *v5; // rbp
  int v6; // r15d
  BOOL v7; // ebx
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  LONG *v13; // rbx
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  struct _WORK_QUEUE_ITEM *v17; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  SharedVm = MiGetSharedVm((__int64)(Object + 640));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = SharedVm;
  if ( dword_1405411D0 != 1 )
  {
    v7 = (*((_DWORD *)Object + 193) & 8) != 0;
    if ( (*((_DWORD *)Object + 193) & 8) != 0 )
    {
      v6 = 0;
    }
    else
    {
      v6 = MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8LL * Object[727]), *((_QWORD *)SharedVm + 1), 1u);
      if ( v6 )
        goto LABEL_15;
    }
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 435, 0x100u);
    v8 = MiGetSharedVm((__int64)(Object + 640));
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *((_BYTE *)Object + 1467) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 640), v9, v10, v11);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v12 = (_QWORD *)*((_QWORD *)v5 + 4);
    v12[2] = MiReAcquireCommitFailWorker;
    v12[3] = Object;
    *v12 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 0, 0);
LABEL_6:
  v13 = MiGetSharedVm((__int64)(Object + 640));
  v14 = ExAcquireSpinLockExclusive(v13);
  v13[1] = 0;
  if ( (HIBYTE(*((_DWORD *)Object + 366)) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1467) = HIBYTE(*((_DWORD *)Object + 366)) & 0x9F | 0x20;
  v17 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v5 + 4);
  if ( v6 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 640), v14, v15, v16);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v17[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v17, 0);
  }
  else
  {
    ExQueueWorkItem(v17, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
