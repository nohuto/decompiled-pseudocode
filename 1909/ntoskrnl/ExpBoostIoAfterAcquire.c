/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140100ED8
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016AF00 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     PsBoostThreadIoQoS @ 0x140101064 (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r9
  int v7; // r10d
  int v8; // ebx
  _QWORD *CurrentThread; // rax
  _QWORD *v10; // rsi
  unsigned __int8 OldIrql; // si
  __int64 v12; // rax
  unsigned int v13; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(_WORD *)(a1 + 26);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 544);
      v13 = (*(_DWORD *)(a2 + 1760) >> 9) & 7;
      if ( (*(_DWORD *)(v12 + 780) & 0x100000) != 0 )
        v13 = 0;
      if ( v13 < 2 )
        v7 = 4;
    }
    v8 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v8 = v7;
    if ( v8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      CurrentThread = ExpFindCurrentThread(a1, a2, (__int64)&LockHandle, 0, 1, a3);
      v10 = CurrentThread;
      if ( (v8 & 4) != 0 )
      {
        if ( (CurrentThread[1] & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(a2, 0LL);
          *((_DWORD *)v10 + 2) |= 1u;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (v10[1] & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          PsBoostThreadIoQoS(a2, 0LL);
          *((_DWORD *)v10 + 2) |= 4u;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)a2, 2, 0);
        if ( (v8 & 2) != 0 && *(_DWORD *)(a2 + 1824) )
        {
          ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
