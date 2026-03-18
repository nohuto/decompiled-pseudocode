/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x14003E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v9; // rdi
  struct _KTHREAD *v10; // rdx
  bool v11; // zf

  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    ExAcquireFastMutex(StreamContext->FastMutex);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  }
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  v9 = 0LL;
  if ( InstanceId )
  {
    if ( Flink != p_FilterContexts )
    {
      while ( Flink[1].Flink != OwnerId || Flink[1].Blink != InstanceId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_8;
      }
LABEL_7:
      v9 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == p_FilterContexts )
        goto LABEL_8;
      while ( Flink[1].Flink != OwnerId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ( Flink != p_FilterContexts )
      v9 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
LABEL_8:
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable++ == -1;
    if ( v11
      && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
