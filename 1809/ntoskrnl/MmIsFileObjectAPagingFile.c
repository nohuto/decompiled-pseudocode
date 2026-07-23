/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x1400DEA08
 * Callers:
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEAA0 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x14013F1C0 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // di
  _QWORD *v4; // rax
  unsigned __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_14043BE38);
  v4 = (_QWORD *)qword_14043BE30;
  while ( v4 )
  {
    v5 = *(v4 - 26);
    if ( a1 < v5 )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 <= v5 )
      {
        v2 = 1;
        break;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BE38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
