/*
 * XREFs of MmUpdateSlabRangeProtection @ 0x140A3CE28
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiEnumerateSlabAllocators @ 0x1402DB63C (MiEnumerateSlabAllocators.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402DCBC0 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MmUpdateSlabRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  char ProtectionMask; // al
  __int64 v10; // r15
  KIRQL v11; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_1404681C4;
  v4 = BugCheckParameter3;
  v5 = (unsigned int)BugCheckParameter4;
  if ( (dword_1404681C4 & 8) != 0 && BugCheckParameter3 )
  {
    do
    {
      v14 = 0LL;
      v13 = BugCheckParameter2;
      MiEnumerateSlabAllocators(
        (__int64)&MiSystemPartition,
        (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiUpdateSlabRangeProtectionHelper,
        (__int64)&v13);
      v7 = v14;
      if ( !v14 )
        KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, v5);
      if ( *(_QWORD *)(v14 + 24) != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, *(_QWORD *)(v14 + 24), 0LL);
      v8 = *(_QWORD *)(v14 + 40);
      if ( !*(_DWORD *)(v8 + 48) && *(_DWORD *)(v8 + 52) != 2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, *(_QWORD *)(v14 + 40), *(int *)(v8 + 48));
      ProtectionMask = MiMakeProtectionMask(v5);
      result = MiGetSlabAllocator((__int64)&MiSystemPartition, 0, ProtectionMask);
      v10 = result;
      if ( result != v8 )
      {
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 16));
        MiRemoveSlabEntry((__int64)&MiSystemPartition, (_RTL_RB_TREE *)v8, v7);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v11);
        *(_QWORD *)(v7 + 40) = v10;
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, v10, v7);
      }
      BugCheckParameter2 += 512LL;
      v4 -= 512LL;
    }
    while ( v4 );
  }
  return result;
}
