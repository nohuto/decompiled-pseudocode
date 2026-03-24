/*
 * XREFs of MiKernelStackVaToStackNode @ 0x140155AC0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14013D4A0 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  KIRQL v3; // di
  _QWORD *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&dword_14043ACA0);
  v4 = (_QWORD *)qword_14043AC98;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043ACA0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
