/*
 * XREFs of FsRtlNotifyCleanup @ 0x1406C2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     FsRtlIsNotifyOnList @ 0x1406C2E58 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406C2E7C (FsRtlNotifyCleanupOneEntry.c)
 */

void __stdcall FsRtlNotifyCleanup(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList, PVOID FsContext)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *IsNotifyOnList; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  IsNotifyOnList = (void *)FsRtlIsNotifyOnList(NotifyList, FsContext);
  if ( IsNotifyOnList )
    FsRtlNotifyCleanupOneEntry(IsNotifyOnList);
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
