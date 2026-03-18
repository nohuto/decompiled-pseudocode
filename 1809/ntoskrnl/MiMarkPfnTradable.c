/*
 * XREFs of MiMarkPfnTradable @ 0x14013D924
 * Callers:
 *     MmCreateKernelStack @ 0x1400C9EF0 (MmCreateKernelStack.c)
 *     KiInSwapProcesses @ 0x14010B320 (KiInSwapProcesses.c)
 *     MiSetPfnKernelStack @ 0x14013D8E0 (MiSetPfnKernelStack.c)
 *     MiAllocateProcessShadow @ 0x1406D1B0C (MiAllocateProcessShadow.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiMarkPfnTradable(__int64 a1, int a2)
{
  unsigned __int8 v3; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
    v3 = 17;
  else
    v3 = MiLockPageInline(a1);
  *(_QWORD *)a1 |= 1uLL;
  if ( v3 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
  }
}
