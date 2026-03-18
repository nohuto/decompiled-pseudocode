/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x14018CA50
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045A30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     KeTimeOutQueueWaiters @ 0x140123E00 (KeTimeOutQueueWaiters.c)
 *     KeRemoveQueue @ 0x140127C00 (KeRemoveQueue.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140136458 (ExpWorkerFactoryDeferredThreadCreation.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  __int64 v2; // rdi
  PLIST_ENTRY v3; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v5; // r8d
  unsigned int Blink; // eax
  char v7; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    while ( 1 )
    {
      v1 = KeRemoveQueue(&ExpWorkerFactoryManagerQueue, 0, 0LL);
      v2 = (__int64)v1;
      if ( v1 != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryDeferredThreadCreation();
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(v1[3].Flink) )
      break;
    v3 = v1 - 29;
    Flink = v1[-28].Flink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
    if ( !LODWORD(v3[19].Flink) )
    {
      v5 = (unsigned int)v3[18].Flink;
      Blink = (unsigned int)v3[17].Blink;
      if ( v5 > Blink )
        KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v3[7].Flink, v5 - Blink);
    }
    if ( BYTE1(Flink[2].Flink) )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      KeRegisterObjectNotification((__int64)&v3[20].Blink, (__int64)&ExpWorkerFactoryManagerQueue, v2);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v7 )
LABEL_14:
      ObfDereferenceObject(v3);
  }
  v3 = (PLIST_ENTRY)((char *)v1 - 520);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1[-32].Blink, &LockHandle);
  LODWORD(v3[19].Blink) &= ~0x400u;
  if ( ((__int64)v3[19].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v3) )
    ExpWorkerFactoryCheckCreate((char *)v3, &LockHandle, 0);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_14;
}
