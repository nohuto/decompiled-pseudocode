/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400958EC
 * Callers:
 *     MiLockProtoPage @ 0x1400961E4 (MiLockProtoPage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(unsigned __int64 a1)
{
  __int64 *v2; // rdi
  unsigned __int64 v3; // rax
  __int16 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v13 = *v2;
      if ( (v13 & 1) == 0 )
        goto LABEL_10;
      v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
      v6 = v5 & (v3 >> 12);
    }
    while ( (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
    if ( (v4 & 0x200) == 0 )
      break;
LABEL_10:
    MmAccessFault(2uLL, a1, 0LL, 0LL);
  }
  v7 = 48 * v6 - 0x58000000000LL;
  v8 = MiLockPageInline(v7);
  v9 = *v2;
  v13 = v9;
  if ( (v9 & 1) == 0
    || (v9 & 0x200) != 0
    || v6 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
    goto LABEL_10;
  }
  MiAddLockedPageCharge(v7, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v12);
  }
  __writecr8(v8);
  return 48 * v6 - 0x58000000000LL;
}
