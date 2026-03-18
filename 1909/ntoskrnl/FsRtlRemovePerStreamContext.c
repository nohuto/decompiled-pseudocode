/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x140284320
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *v7; // rbx
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  v7 = 0LL;
  p_FilterContexts = &StreamContext->FilterContexts;
  Flink = StreamContext->FilterContexts.Flink;
  if ( InstanceId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( Flink != p_FilterContexts )
  {
LABEL_9:
    v7 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    if ( Flink )
    {
      v10 = Flink->Flink;
      if ( (struct _FSRTL_PER_STREAM_CONTEXT *)v10->Blink != v7
        || (Blink = v7->Links.Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v7) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v10;
      v10->Blink = Blink;
    }
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v7;
}
