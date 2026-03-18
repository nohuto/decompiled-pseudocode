/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1402A1744
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PipDgqFreeEntry @ 0x14087BBEC (PipDgqFreeEntry.c)
 */

_QWORD *__fastcall PiDmaGuardQueueRemoveEntry(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  PVOID **v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (PVOID *)PipDgqListHead;
  if ( PipDgqListHead != &PipDgqListHead )
  {
    while ( 1 )
    {
      v4 = (PVOID *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (PVOID *)*v3;
      if ( v4 == &PipDgqListHead )
        goto LABEL_4;
    }
    if ( v4[1] != v3 || (v6 = (PVOID **)v3[1], *v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
