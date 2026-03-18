/*
 * XREFs of OSQueueWorkItem @ 0x1C002B178
 * Callers:
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     RestartContext @ 0x1C00237D0 (RestartContext.c)
 *     AMLIResumeInterpreter @ 0x1C0061260 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_1C007F8B8;
  if ( *(__int64 **)qword_1C007F8B8 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_1C007F8B8 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
