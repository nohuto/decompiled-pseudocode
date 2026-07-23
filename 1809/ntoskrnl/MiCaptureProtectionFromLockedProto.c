/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1402BF5DC
 * Callers:
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rbx
  struct _KPRCB *v9; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(a1);
      v2 = v11;
      v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
      if ( (v2 & 1) == 0 )
      {
        v8 = v3 >> 5;
        return v8 & 0x1F;
      }
      v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
    v5 = 48 * v4 - 0x58000000000LL;
    v6 = MiLockPageInline(v5);
    if ( v2 == MI_READ_PTE_LOCK_FREE(a1) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
  }
  v8 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v5 + 16) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v9);
  }
  __writecr8(v6);
  return v8 & 0x1F;
}
