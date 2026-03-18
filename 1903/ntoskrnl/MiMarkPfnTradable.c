/*
 * XREFs of MiMarkPfnTradable @ 0x1400E3C18
 * Callers:
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MiSetPfnKernelStack @ 0x1400E3BD8 (MiSetPfnKernelStack.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
