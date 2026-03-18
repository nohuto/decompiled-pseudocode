/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x140168AA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PopCreateDynamicIrpWorker @ 0x14017FD40 (PopCreateDynamicIrpWorker.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rbx
  int v1; // edi
  _QWORD *v2; // rax
  bool v3; // sf
  __int64 v4; // rbx
  _QWORD Object[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(Object, 0, 0x20uLL);
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 0;
  v0 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  PopIrpWorkerPendingCount += v0;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  HIDWORD(Object[0]) = 0;
  Object[2] = &Object[1];
  v1 = 0;
  LOBYTE(Object[0]) = 5;
  v2 = &Object[1];
  Object[1] = &Object[1];
  BYTE2(Object[0]) = 8;
  LODWORD(Object[3]) = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      v3 = (int)PopCreateDynamicIrpWorker(Object) < 0;
      LODWORD(v2) = v1 + 1;
      if ( v3 )
        LODWORD(v2) = v1;
      v1 = (int)v2;
      --v0;
    }
    while ( v0 );
    if ( (_DWORD)v2 )
    {
      v4 = (unsigned int)v2;
      do
      {
        LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        --v4;
      }
      while ( v4 );
    }
  }
  return (int)v2;
}
