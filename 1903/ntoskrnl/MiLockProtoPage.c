/*
 * XREFs of MiLockProtoPage @ 0x140102454
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x14010265C (MiMakeProtoAddressValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6, v8, v9, v10);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[6], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared((__int64)&Process[1].IdealNode[6]);
  return BugCheckParameter1;
}
