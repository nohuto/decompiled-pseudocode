/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1401447B8
 * Callers:
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int8 v8; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
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
        v4 = v3 >> 5;
        return v4 & 0x1F;
      }
      v6 = (v3 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    if ( v2 == MI_READ_PTE_LOCK_FREE(a1) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
  }
  v4 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v7 + 16) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v8);
  return v4 & 0x1F;
}
