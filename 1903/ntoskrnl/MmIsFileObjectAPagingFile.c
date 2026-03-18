/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x1400A78B8
 * Callers:
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x1402844A0 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // di
  _QWORD *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_1404667F8);
  v4 = (_QWORD *)qword_1404667F0;
  while ( v4 )
  {
    if ( a1 < *(v4 - 26) )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 <= *(v4 - 26) )
      {
        v2 = 1;
        break;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1404667F8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
