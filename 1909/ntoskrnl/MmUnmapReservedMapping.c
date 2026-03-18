/*
 * XREFs of MmUnmapReservedMapping @ 0x1402C0E60
 * Callers:
 *     SmFpFree @ 0x14014A504 (SmFpFree.c)
 *     sub_1401B8D10 @ 0x1401B8D10 (sub_1401B8D10.c)
 *     PnprCopyReservedMapping @ 0x1402A0054 (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x1402A09BC (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x140308F48 (PspIumFreePhysicalPages.c)
 *     PnprMapPhysicalPages @ 0x1405A99DC (PnprMapPhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x140907458 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1402BF9DC (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
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
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 i; // r9
  __int64 v16; // r9

  v3 = (ULONG_PTR)BaseAddress;
  v4 = PoolTag;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140466400);
  v8 = qword_140466408;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v3, v4, 2uLL);
      if ( v9 <= *(_QWORD *)(v8 + 24) )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 >= *(_QWORD *)(v8 + 24) )
      break;
    v8 = *(_QWORD *)v8;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140466400);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v4 )
    KeBugCheckEx(0xDAu, 0x102uLL, v3, v4, BugCheckParameter4);
  v12 = *(_QWORD *)(v8 + 32);
  if ( !v12 )
    KeBugCheckEx(0xDAu, 0x10DuLL, v3, v8, v4);
  if ( BugCheckParameter4 > v12 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v3, v12, BugCheckParameter4);
  MiUnmapMdlCommon(v3, 0LL, v4, (__int64)MemoryDescriptorList, BugCheckParameter4);
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v13 + 8LL * *(_QWORD *)(v8 + 32);
  for ( i = v13 + 8 * BugCheckParameter4; i < v14; i = v16 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) )
      KeBugCheckEx(0xDAu, 0x10CuLL, v3, v4, BugCheckParameter4);
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
