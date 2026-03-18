/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x140283100
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1402830A0 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140102780 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D710 (FsRtlpOplockBreakToNone.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rbx
  NTSTATUS v9; // esi
  ULONG v10; // edi
  POPLOCK_FS_PREPOST_IRP v11; // r15
  POPLOCK_WAIT_COMPLETE_ROUTINE v12; // r12
  _BYTE v14[8]; // [rsp+50h] [rbp-38h] BYREF
  PVOID v15; // [rsp+58h] [rbp-30h]
  char v16; // [rsp+90h] [rbp+8h] BYREF

  v8 = (PFAST_MUTEX *)*Oplock;
  v15 = *Oplock;
  v16 = 0;
  if ( (Flags & 0x10) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
    v10 = Flags | 8;
    v11 = PostIrpRoutine;
    v12 = CompletionRoutine;
    do
    {
      v14[0] = 0;
      if ( !v16 )
      {
        ExAcquireFastMutexUnsafe(v8[19]);
        v16 = 1;
      }
      v9 = FsRtlpOplockBreakToNone(
             (__int64)v8,
             (__int64)Irp->Tail.Overlay.CurrentStackLocation,
             (__int64)Irp,
             v10,
             (__int64)Context,
             (__int64)v12,
             (__int64)v11,
             &v16,
             (__int64)v14);
      if ( !v9 )
        v9 = FsRtlpOplockBreakByCacheFlags(
               (__int64)v8,
               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
               Irp,
               v10,
               28672,
               (__int64)Context,
               (__int64)v12,
               (__int64)v11,
               &v16,
               (__int64)v14);
    }
    while ( v14[0] );
  }
  if ( v16 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v9;
}
