/*
 * XREFs of MiFreeContiguousPages @ 0x1401231C4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x14084EB60 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14084F140 (MiRemoveMdlPages.c)
 *     MiUnmapLargeDriver @ 0x14085EBDC (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiFreeContiguousPages(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  ULONG_PTR v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // al
  __int16 v10; // dx
  unsigned __int8 v11; // bp
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2;
  v6 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  do
  {
    v8 = v6;
    if ( (v4 & 0x1FF) != 0 || a3 < 0x200 )
    {
      v9 = MiLockPageInline(v7);
      v10 = *(_WORD *)(v7 + 32);
      ++v6;
      v11 = v9;
      *(_WORD *)(v7 + 32) = v10 - 1;
      if ( v10 != 2 )
        v6 = v8;
      *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v11);
      result = -1LL;
      v13 = 1LL;
      v14 = 48LL;
    }
    else
    {
      v6 += MiFreeLargePageMemory(v4, 1u, 0);
      v14 = 24576LL;
      result = -512LL;
      v13 = 512LL;
    }
    v7 += v14;
    v4 += v13;
    a3 += result;
  }
  while ( a3 );
  if ( v6 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(v6);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), v6);
    return MiReturnCommit(a1, v6);
  }
  return result;
}
