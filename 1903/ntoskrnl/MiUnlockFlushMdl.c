/*
 * XREFs of MiUnlockFlushMdl @ 0x140074A88
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 * Callees:
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MiBuildWakeList @ 0x1400743CC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, _DWORD *a3, __int64 a4)
{
  CSHORT MdlFlags; // ax
  volatile LONG *v8; // rsi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 result; // rax
  __int64 v12; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList);
    MdlFlags = MemoryDescriptorList->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1].Next,
    (unsigned __int64)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3,
    a4);
  v8 = (volatile LONG *)(a2 + 72);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v10 = v9;
  result = (__int64)MiBuildWakeList(a2, 8);
  v12 = result;
  if ( v10 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v10;
    __writecr8(v10);
  }
  if ( v12 )
    return MiReleaseControlAreaWaiters(v12);
  return result;
}
