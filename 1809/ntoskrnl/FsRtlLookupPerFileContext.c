/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140112220
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  char *v3; // rbx
  struct _FSRTL_PER_FILE_CONTEXT **v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rbp

  v3 = (char *)*PerFileContextPointer;
  if ( !*PerFileContextPointer )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 8);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  Flink = *v7;
  v10 = 0LL;
  if ( InstanceId )
  {
    if ( Flink == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
      goto LABEL_9;
    while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
    {
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( !OwnerId )
  {
    if ( Flink == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    while ( Flink->OwnerId != OwnerId )
    {
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
        goto LABEL_9;
    }
LABEL_8:
    v10 = Flink;
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
