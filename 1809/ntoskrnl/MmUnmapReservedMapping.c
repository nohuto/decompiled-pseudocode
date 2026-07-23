/*
 * XREFs of MmUnmapReservedMapping @ 0x1402A9A10
 * Callers:
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     sub_1401AD8B0 @ 0x1401AD8B0 (sub_1401AD8B0.c)
 *     PnprCopyReservedMapping @ 0x14028A170 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x14028AAC0 (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x14057ABCC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  KIRQL v7; // al
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rdx
  KIRQL v10; // r15
  unsigned __int64 v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  unsigned __int64 i; // r9
  __int64 v17; // r9

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_14043BD40);
  v8 = qword_14043BD48;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v3, v4, 2uLL);
      v11 = *(_QWORD *)(v8 + 24);
      if ( v9 <= v11 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 >= v11 )
      break;
    v8 = *(_QWORD *)v8;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BD40);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v13 = *(_QWORD *)(v8 + 32);
  if ( !v13 )
    KeBugCheckEx(0xDAu, 0x10DuLL, v3, v8, v4);
  if ( BugCheckParameter4 > v13 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v13, BugCheckParameter4);
  MiUnmapMdlCommon(v3, v4, (__int64)MemoryDescriptorList, BugCheckParameter4);
  v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v14 + 8LL * *(_QWORD *)(v8 + 32);
  for ( i = v14 + 8 * BugCheckParameter4; i < v15; i = v17 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
