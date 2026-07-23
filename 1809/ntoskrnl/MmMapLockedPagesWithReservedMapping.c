/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x14018EA60
 * Callers:
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     sub_1401AD920 @ 0x1401AD920 (sub_1401AD920.c)
 *     PnprCopyReservedMapping @ 0x14028A170 (PnprCopyReservedMapping.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x14057ABCC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiLegitimatePageForDriversToMap @ 0x1400298DC (MiLegitimatePageForDriversToMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiMapMdlCommon @ 0x14018EC34 (MiMapMdlCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // r9
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v19; // r11
  PMDL v20; // r10
  unsigned __int64 v21; // r9
  struct _MDL *Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_14043BD40);
  v10 = qword_14043BD48;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      v13 = *(_QWORD *)(v10 + 24);
      if ( v11 >= v13 )
        break;
      v10 = *(_QWORD *)v10;
    }
    if ( v11 <= v13 )
      break;
    v10 = *(_QWORD *)(v10 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BD40);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  v14 = *(_QWORD *)(v10 + 32);
  if ( v7 <= v14 )
  {
    v15 = ((*(_QWORD *)(v10 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = v15;
    if ( v15 < v15 + 8 * v14 )
    {
      do
      {
        if ( MI_READ_PTE_LOCK_FREE(v16) )
          KeBugCheckEx(0xDAu, 0x107uLL, v19, v17, BugCheckParameter4);
        v16 = v17 + 8;
      }
      while ( v16 < BugCheckParameter4 );
    }
    v20 = MemoryDescriptorList + 1;
    v21 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
         + (unsigned __int64)MemoryDescriptorList->ByteCount
         + 4095) >> 12;
    while ( 1 )
    {
      Next = v20->Next;
      if ( v20->Next <= (struct _MDL *)0xFFFFFFFFFLL
        && (*(_QWORD *)(48LL * (_QWORD)Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0
        && (int)MiLegitimatePageForDriversToMap(48LL * (_QWORD)Next - 0x58000000000LL) < 0 )
      {
        break;
      }
      v20 = (PMDL)((char *)v20 + 8);
      if ( !--v21 )
        return (PVOID)MiMapMdlCommon(MemoryDescriptorList, v15, 4LL, (unsigned int)CacheType);
    }
  }
  return 0LL;
}
