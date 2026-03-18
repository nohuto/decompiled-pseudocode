/*
 * XREFs of PipDgqInsertEntry @ 0x14087BC24
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x14087BB84 (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_14045EAF8;
  if ( *(PVOID **)qword_14045EAF8 != &PipDgqListHead )
    __fastfail(3u);
  *a1 = &PipDgqListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_14045EAF8 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
