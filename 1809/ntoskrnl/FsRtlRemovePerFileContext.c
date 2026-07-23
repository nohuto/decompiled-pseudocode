/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1402709B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rdi
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 8);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  Flink = *v7;
  v10 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
LABEL_6:
    v10 = Flink;
    if ( Flink )
    {
      v11 = Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v11->Blink != v10
        || (Blink = v10->Links.Blink, (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v10) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v11;
      v11->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v6, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
