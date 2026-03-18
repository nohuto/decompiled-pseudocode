/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140094E58
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x140284200 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // di
  _QWORD *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_1404664F8);
  v4 = (_QWORD *)qword_1404664F0;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1404664F8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
