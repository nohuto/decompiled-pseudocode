/*
 * XREFs of MiLockNonPagedPoolPte @ 0x140162570
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161360 (MiInsertNonPagedPoolOnSlist.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3, unsigned __int8 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    v4 = v10;
    if ( (v10 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    v6 = MiLockPageInline(v5);
    *a2 = v6;
    v7 = v6;
    if ( v4 == MI_READ_PTE_LOCK_FREE(BugCheckParameter3) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
  }
  return v5;
}
