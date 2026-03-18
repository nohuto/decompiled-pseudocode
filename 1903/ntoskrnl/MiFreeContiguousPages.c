/*
 * XREFs of MiFreeContiguousPages @ 0x140116EB4
 * Callers:
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1408892E0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140889B60 (MiRemoveMdlPages.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x14089A82C (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiFreeContiguousPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int8 v9; // bp
  __int16 v10; // cx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = BugCheckParameter2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  do
  {
    v7 = v5;
    v8 = v4;
    if ( (v3 & 0x1FF) != 0 || a2 < 0x200 )
    {
      v9 = MiLockPageInline(v6);
      v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL));
      v10 = *(_WORD *)(v6 + 32);
      if ( v8 )
        v4 = v8;
      ++v5;
      *(_WORD *)(v6 + 32) = v10 - 1;
      if ( v10 != 2 )
        v5 = v7;
      *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v9);
      result = -1LL;
      v12 = 1LL;
      v13 = 48LL;
    }
    else
    {
      if ( !v4 )
        v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL));
      v5 += MiFreeLargePageMemory(v3);
      v13 = 24576LL;
      result = -512LL;
      v12 = 512LL;
    }
    v3 += v12;
    v6 += v13;
    a2 += result;
  }
  while ( a2 );
  if ( v5 )
  {
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8128), v5);
    return MiReturnCommit(v4, v5);
  }
  return result;
}
