/*
 * XREFs of MiGetEnclavePage @ 0x1402D46DC
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x1401569B4 (MiAllocateMdlPagesByLists.c)
 *     MiGetPageForEnclave @ 0x1402D4964 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x1402D51C8 (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x140893AC4 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3CA7C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetEnclavePage(_QWORD *a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // r12
  __int64 v6; // rbx
  struct _KPRCB *v7; // rcx
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = a1 + 516;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 516);
  while ( a2 || a1[512] )
  {
    v5 = a1[514];
    v6 = 48 * v5 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      goto LABEL_20;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    LockHandle.LockQueue.Lock = a1 + 516;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 516);
    if ( (*(_BYTE *)(v6 + 35) & 0x10) != 0 )
    {
LABEL_20:
      v9 = *(_QWORD *)v6 & 0xFFFFFFFFFLL;
      v10 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFLL;
      if ( v9 == 0xFFFFFFFFFLL )
        a1[515] = v10;
      else
        MiSetPfnBlink(48 * v9 - 0x58000000000LL, *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFLL, 0);
      if ( v10 == 0xFFFFFFFFFLL )
        a1[514] = v9;
      else
        *(_QWORD *)(48 * v10 - 0x58000000000LL) = v9 | *(_QWORD *)(48 * v10 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
      if ( !a2 )
        --a1[512];
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(v6 + 35) &= ~0x10u;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = v5;
      goto LABEL_34;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v7);
  }
  result = -1LL;
LABEL_34:
  __writecr8(CurrentIrql);
  return result;
}
