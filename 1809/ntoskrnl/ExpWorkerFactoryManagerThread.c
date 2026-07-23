/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x14017FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140106E08 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeTimeOutQueueWaiters @ 0x140107034 (KeTimeOutQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v3; // r8d
  unsigned int Blink; // eax
  char v5; // di
  unsigned __int8 OldIrql; // si
  unsigned __int8 v7; // di
  PSLIST_ENTRY v8; // rdi
  PSLIST_ENTRY v9; // rbx
  __int64 v10; // r8
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+48h] [rbp-18h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+78h] [rbp+18h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      KeRemoveQueueEx(&ExpWorkerFactoryManagerQueue, 0, 0, 0LL, &EntryArray, 1u);
      if ( EntryArray != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryThreadCreationState = 0;
      v8 = RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
      while ( v8 )
      {
        v9 = v8;
        v8 = v8->Next;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9[1].Next, &v14);
        *((_DWORD *)&v9[9].Next + 2) &= ~8u;
        LOBYTE(v10) = 1;
        ExpWorkerFactoryCheckCreate((char *)v9, &v14, v10);
        ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      }
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( LODWORD(EntryArray[3].Flink) )
    {
      v1 = EntryArray - 19;
      Flink = EntryArray[-18].Flink;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
      if ( !LODWORD(v1[9].Flink) )
      {
        v3 = (unsigned int)v1[8].Flink;
        Blink = (unsigned int)v1[7].Blink;
        if ( v3 > Blink )
          KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v1[7].Flink, v3 - Blink);
      }
      if ( BYTE1(Flink[2].Flink) )
      {
        v5 = 1;
      }
      else
      {
        v5 = 0;
        KeRegisterObjectNotification((__int64)&v1[10].Blink, (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v1[19]);
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( v5 )
        goto LABEL_10;
    }
    else
    {
      v1 = (PLIST_ENTRY)((char *)EntryArray - 360);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)EntryArray[-22].Blink, &LockHandle);
      LODWORD(v1[9].Blink) &= ~0x400u;
      if ( ((__int64)v1[9].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v1) )
      {
        ExpWorkerFactoryCheckCreate((char *)v1, &LockHandle, 0LL);
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v7 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v11 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v11);
        }
        __writecr8(v7);
      }
LABEL_10:
      ObfDereferenceObjectWithTag(v1, 0x746C6644u);
    }
  }
}
