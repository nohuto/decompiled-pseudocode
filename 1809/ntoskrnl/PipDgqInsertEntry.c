/*
 * XREFs of PipDgqInsertEntry @ 0x140841D80
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x140841CE0 (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_1404341B8;
  if ( *(PVOID **)qword_1404341B8 != &PipDgqListHead )
    __fastfail(3u);
  *a1 = &PipDgqListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_1404341B8 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
