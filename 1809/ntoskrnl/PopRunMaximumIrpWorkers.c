/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x14015887C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopCreateDynamicIrpWorker @ 0x1401764C0 (PopCreateDynamicIrpWorker.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rbx
  int v1; // edi
  _QWORD *v2; // rax
  bool v3; // sf
  __int64 v4; // rbx
  _BYTE Object[4]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-10h]

  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 0;
  v0 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  PopIrpWorkerPendingCount += v0;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  v7 = 0;
  v8[1] = v8;
  v1 = 0;
  Object[0] = 5;
  v2 = v8;
  v8[0] = v8;
  Object[2] = 8;
  v9 = v0;
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
