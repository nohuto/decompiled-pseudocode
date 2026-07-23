/*
 * XREFs of MiMapSystemCachePage @ 0x1402AC0B0
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapFrame @ 0x1402ABFA4 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int8 v10; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  struct _KPRCB *v14; // rcx
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  while ( 1 )
  {
    v15 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v15 & 1) == 0 )
      return 0LL;
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
    v8 = v7 & (v6 >> 12);
    if ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      return 0LL;
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    v15 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v15 & 1) == 0 )
      goto LABEL_21;
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFLL) == v8 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v10);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v8 - 0x58000000000LL, 0) )
  {
LABEL_21:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    __writecr8(v10);
    return 0LL;
  }
  if ( (a3 & 4) == 0 || !MiIsPfnFileOnly(48 * v8 - 0x58000000000LL) )
    *(_BYTE *)(v9 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  __writecr8(v10);
  return MiMapFrame(a1, v8);
}
