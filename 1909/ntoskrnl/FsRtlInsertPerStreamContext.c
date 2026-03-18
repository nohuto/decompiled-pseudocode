/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x140117110
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *p_FilterContexts; // rax

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
  }
  Flink = PerStreamContext->FilterContexts.Flink;
  p_FilterContexts = &PerStreamContext->FilterContexts;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(PerStreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0;
}
