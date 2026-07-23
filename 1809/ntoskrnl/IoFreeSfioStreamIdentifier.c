/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1402832C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void **FileObjectExtension; // rbx
  __int64 v4; // r9
  NTSTATUS v5; // esi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  PVOID *v8; // rcx
  KIRQL v9; // di
  void **v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  void **v13; // rax

  FileObjectExtension = (void **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = (KSPIN_LOCK *)(v4 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 184));
    v8 = (PVOID *)*FileObjectExtension;
    v9 = v7;
    if ( *FileObjectExtension != FileObjectExtension )
    {
      while ( 1 )
      {
        v10 = (void **)*v8;
        if ( v8[3] == Signature )
          break;
        v8 = (PVOID *)*v8;
        if ( v10 == FileObjectExtension )
          goto LABEL_5;
      }
      v13 = (void **)v8[1];
      if ( v10[1] != v8 || *v13 != v8 )
        __fastfail(3u);
      *v13 = v10;
      v10[1] = v13;
      ExFreePoolWithTag(v8, 0);
      v5 = 0;
    }
LABEL_5:
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
  }
  return v5;
}
