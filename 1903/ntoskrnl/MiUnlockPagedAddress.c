/*
 * XREFs of MiUnlockPagedAddress @ 0x1402C4B38
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140142BA0 (MiInsertNewCombineBlocks.c)
 *     MiFreeClonePool @ 0x1402E4328 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1402E6480 (MiFreeCombinePool.c)
 *     MiBuildNewCloneDescriptor @ 0x14089AD30 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14089B518 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v2 = MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1, v3, v4, v5);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
