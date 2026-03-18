/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x14010B8E4
 * Callers:
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 */

void CmpWaitForLateUnloadWorker()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    v0 = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !v0 )
      break;
    ExBlockOnAddressPushLock(
      (unsigned int)&CmpWorkerEngineFinishedEvent,
      (unsigned int)&CmpWorkerEngineWorkItemActive,
      (unsigned int)&v0,
      1,
      0LL);
  }
}
