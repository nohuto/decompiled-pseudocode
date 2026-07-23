/*
 * XREFs of MiUnlockFlushMdl @ 0x14001E3D8
 * Callers:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiUnlockMdlWritePages @ 0x14001E4F0 (MiUnlockMdlWritePages.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 */

__int64 __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  CSHORT MdlFlags; // ax
  volatile LONG *v7; // rsi
  KIRQL v8; // al
  KIRQL v9; // bl
  __int64 result; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
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
    &MemoryDescriptorList[1],
    (char *)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3);
  v7 = (volatile LONG *)(a2 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v9 = v8;
  result = MiBuildWakeList(a2, 8LL);
  v11 = (_QWORD *)result;
  if ( v9 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
    }
    result = v9;
    __writecr8(v9);
  }
  if ( v11 )
    return MiReleaseControlAreaWaiters(v11);
  return result;
}
