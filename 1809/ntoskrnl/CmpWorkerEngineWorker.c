/*
 * XREFs of CmpWorkerEngineWorker @ 0x1406978C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     ExfUnblockPushLock @ 0x1401B7430 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

PVOID CmpWorkerEngineWorker()
{
  _QWORD *v0; // rdi
  __int64 v1; // rax
  int v2; // ebx
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID v5[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v5);
  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    v0 = CmpWorkerEngineListHead;
    if ( CmpWorkerEngineListHead == &CmpWorkerEngineListHead )
      break;
    if ( *((PVOID **)CmpWorkerEngineListHead + 1) != &CmpWorkerEngineListHead
      || (v1 = *(_QWORD *)CmpWorkerEngineListHead,
          *(PVOID *)(*(_QWORD *)CmpWorkerEngineListHead + 8LL) != CmpWorkerEngineListHead) )
    {
      __fastfail(3u);
    }
    CmpWorkerEngineListHead = *(PVOID *)CmpWorkerEngineListHead;
    *(_QWORD *)(v1 + 8) = &CmpWorkerEngineListHead;
    v0[1] = v0;
    *v0 = v0;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    v2 = *((_DWORD *)v0 + 4);
    ((void (__fastcall *)(_QWORD))v0[3])(v0[4]);
    if ( !v2 )
      ExFreePoolWithTag(v0, 0);
  }
  CmpWorkerEngineWorkItemActive = 0;
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  _InterlockedOr(v4, 0);
  if ( CmpWorkerEngineFinishedEvent )
    ExfUnblockPushLock(&CmpWorkerEngineFinishedEvent, 0LL);
  return CmCleanupThreadInfo(v5);
}
