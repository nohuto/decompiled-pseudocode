/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64
 * Callers:
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiBeginProcessClean @ 0x14008BA24 (MiBeginProcessClean.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     KeFreezeProcess @ 0x1400EE7A4 (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402BB37C (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  LONG *v5; // rbp
  int v6; // r15d
  int v7; // ebx
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  LONG *v14; // rbx
  KIRQL v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  struct _WORK_QUEUE_ITEM *v19; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  SharedVm = MiGetSharedVm((__int64)(Object + 640));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = SharedVm;
  if ( dword_1405711E0 != 1 )
  {
    if ( (*((_DWORD *)Object + 195) & 8) != 0 )
    {
      v7 = 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = MiChargeCommit(*(_QWORD *)(qword_140466188 + 8LL * Object[727]), *((_QWORD *)SharedVm + 1), 1u);
      if ( v6 )
        goto LABEL_15;
    }
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 447, 0x100u);
    v8 = MiGetSharedVm((__int64)(Object + 640));
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *((_BYTE *)Object + 1467) |= 0x60u;
    LOBYTE(v10) = v9;
    MiUnlockWorkingSetExclusive((__int64)(Object + 640), v10, v11, v12);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v13 = (_QWORD *)*((_QWORD *)v5 + 4);
    v13[2] = MiReAcquireCommitFailWorker;
    v13[3] = Object;
    *v13 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 0, 0);
LABEL_6:
  v14 = MiGetSharedVm((__int64)(Object + 640));
  v15 = ExAcquireSpinLockExclusive(v14);
  v14[1] = 0;
  v18 = HIBYTE(*((_DWORD *)Object + 366));
  if ( (HIBYTE(*((_DWORD *)Object + 366)) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1467) = HIBYTE(*((_DWORD *)Object + 366)) & 0x9F | 0x20;
  v19 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v5 + 4);
  if ( v6 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
  }
  LOBYTE(v18) = v15;
  MiUnlockWorkingSetExclusive((__int64)(Object + 640), v18, v16, v17);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v19[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  else
  {
    ExQueueWorkItem(v19, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
