/*
 * XREFs of PspIumFreePhysicalPages @ 0x140309498
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401986D0 (MmMapLockedPagesWithReservedMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MmUnmapReservedMapping @ 0x1402C1100 (MmUnmapReservedMapping.c)
 *     MmFreeSecureKernelPages @ 0x1402DD3AC (MmFreeSecureKernelPages.c)
 *     PspIumFreePartitionPages @ 0x1403092C4 (PspIumFreePartitionPages.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1, int a2, ULONG_PTR a3)
{
  KIRQL v5; // si
  PVOID v6; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v9[2]; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v9[0] = a3;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  v5 = 0;
  MemoryDescriptorList.ByteCount = 4096;
  v6 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v6 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v6 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( *((_DWORD *)v6 + 10) )
  {
    if ( a1 )
      PspIumFreePartitionPages(
        a1,
        (*((_DWORD *)v6 + 10) >> 12) + ((*((_DWORD *)v6 + 10) & 0xFFF) != 0),
        (ULONG_PTR *)v6 + 6);
    else
      MmFreeSecureKernelPages((ULONG_PTR)v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock(&PspIumFreeMappingLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    PspIumFreePartitionPages(a1, 1, v9);
  else
    MmFreeSecureKernelPages((ULONG_PTR)&MemoryDescriptorList, 0);
}
