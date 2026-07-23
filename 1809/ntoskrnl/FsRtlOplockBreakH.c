/*
 * XREFs of FsRtlOplockBreakH @ 0x1406C5F30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS v10; // ebx
  POPLOCK_FS_PREPOST_IRP v12; // r12
  POPLOCK_WAIT_COMPLETE_ROUTINE v13; // r13
  char v14; // [rsp+A0h] [rbp+8h] BYREF
  char v15; // [rsp+A8h] [rbp+10h] BYREF
  PVOID v16; // [rsp+B8h] [rbp+20h]

  v16 = Context;
  v8 = (PFAST_MUTEX *)*Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v14 = 0;
  v10 = 0;
  if ( !v8 )
    return v10;
  v10 = FsRtlpAttachOplockKey(Irp);
  if ( !v10 )
  {
    if ( CurrentStackLocation->MajorFunction )
    {
LABEL_8:
      v12 = PostIrpRoutine;
      v13 = CompletionRoutine;
      do
      {
        v15 = 0;
        if ( !v14 )
        {
          ExAcquireFastMutexUnsafe(v8[19]);
          v14 = 1;
        }
        v10 = FsRtlpOplockBreakByCacheFlags(
                (__int64)v8,
                (__int64)CurrentStackLocation,
                Irp,
                Flags,
                0x2000,
                (__int64)v16,
                (__int64)v13,
                (__int64)v12,
                &v14,
                (__int64)&v15);
      }
      while ( v15 );
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0 )
    {
      if ( (CurrentStackLocation->Parameters.Create.Options & 0x10000) != 0 )
        Flags |= 0x10000000u;
      goto LABEL_8;
    }
    v10 = 0;
  }
LABEL_14:
  if ( v14 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v10;
}
