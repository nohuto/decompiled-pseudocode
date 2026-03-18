/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1402CF134
 * Callers:
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
  }
  return v5;
}
