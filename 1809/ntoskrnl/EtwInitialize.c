/*
 * XREFs of EtwInitialize @ 0x1407444D0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExIsSoftBoot @ 0x1401864F0 (ExIsSoftBoot.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CBB70 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      EtwpFileSystemReady = 1;
      if ( ExIsSoftBoot() )
      {
        EtwpLoggerSaveInProgress = 1;
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4B777445u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpSavePersistedLoggersWorker;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
        }
        else
        {
          EtwpSavePersistedLoggersWorker(0LL);
        }
      }
    }
  }
  else
  {
    EtwpInitialize();
  }
}
