/*
 * XREFs of MiKernelStackVaToStackNode @ 0x140164454
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  KIRQL v3; // di
  _QWORD *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&dword_140466420);
  v4 = (_QWORD *)qword_140466418;
  while ( v4 )
  {
    if ( a1 > v4[3] )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v4[4] )
      {
        v2 = v4;
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140466420);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
