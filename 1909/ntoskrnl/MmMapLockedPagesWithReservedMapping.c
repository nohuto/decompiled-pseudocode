/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x140198D30
 * Callers:
 *     SmFpAllocate @ 0x1401491C4 (SmFpAllocate.c)
 *     sub_1401B8D80 @ 0x1401B8D80 (sub_1401B8D80.c)
 *     PnprCopyReservedMapping @ 0x1402A0054 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x140308F48 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1405A99DC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140907458 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLegitimatePageForDriversToMap @ 0x140157500 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // r15
  KIRQL v9; // al
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rdx
  KIRQL v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  ULONG_PTR v16; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v18; // r11
  PMDL v19; // r11
  unsigned __int64 v20; // r10
  struct _MDL *Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140466400);
  v10 = qword_140466408;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      if ( v11 <= *(_QWORD *)(v10 + 24) )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 >= *(_QWORD *)(v10 + 24) )
      break;
    v10 = *(_QWORD *)v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140466400);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v13 = *(_QWORD *)(v10 + 32);
  if ( v7 <= v13 )
  {
    v14 = ((*(_QWORD *)(v10 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v14;
    if ( v14 < v14 + 8 * v13 )
    {
      do
      {
        if ( MI_READ_PTE_LOCK_FREE(v15) )
          KeBugCheckEx(0xDAu, 0x107uLL, v18, v16, BugCheckParameter4);
        v15 = v16 + 8;
      }
      while ( v15 < BugCheckParameter4 );
    }
    v19 = MemoryDescriptorList + 1;
    v20 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
         + (unsigned __int64)MemoryDescriptorList->ByteCount
         + 4095) >> 12;
    while ( 1 )
    {
      Next = v19->Next;
      if ( v19->Next <= (struct _MDL *)0xFFFFFFFFFLL
        && (*(_QWORD *)(48LL * (_QWORD)Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0
        && (int)MiLegitimatePageForDriversToMap(48LL * (_QWORD)Next - 0x58000000000LL) < 0 )
      {
        break;
      }
      v19 = (PMDL)((char *)v19 + 8);
      if ( !--v20 )
        return (PVOID)MiMapMdlCommon((_DWORD)MemoryDescriptorList, v14, 0, 4, CacheType);
    }
  }
  return 0LL;
}
