/*
 * XREFs of CmWorkerEngineDequeueWorkItem @ 0x140827440
 * Callers:
 *     CmpUnfreezeHive @ 0x14082A540 (CmpUnfreezeHive.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 */

char __fastcall CmWorkerEngineDequeueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    if ( (_QWORD *)v3[1] != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
    a1[1] = a1;
    *a1 = a1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  return v2;
}
