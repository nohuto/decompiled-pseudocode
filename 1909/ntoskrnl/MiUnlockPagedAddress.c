/*
 * XREFs of MiUnlockPagedAddress @ 0x1402C4898
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x1401430E0 (MiInsertNewCombineBlocks.c)
 *     MiFreeClonePool @ 0x1402E4088 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x1402E61E0 (MiFreeCombinePool.c)
 *     MiBuildNewCloneDescriptor @ 0x14089A550 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14089AD38 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v5) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v2 = MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1);
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
