/*
 * XREFs of ndisAllocatePerProcessorSlot @ 0x1C0026190
 * Callers:
 *     ndisAllocateOpenBlock @ 0x1C0024A4C (ndisAllocateOpenBlock.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026070 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00C3ED8 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C002634C (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00395C4 (ndisAllocatePerProcessorPageDescriptor.c)
 */

__int64 __fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v4; // si
  struct _LIST_ENTRY **v5; // rcx
  __int64 FreeSlotFromDescriptor; // rbx
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  Flink = ndisPerProcessorDescriptorList.Flink;
  v4 = v2;
  while ( Flink != &ndisPerProcessorDescriptorList )
  {
    FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, a1);
    if ( FreeSlotFromDescriptor )
      goto LABEL_5;
    Flink = *v5;
  }
  FreeSlotFromDescriptor = 0LL;
LABEL_5:
  if ( !FreeSlotFromDescriptor )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      v10 = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v9->Flink = ndisPerProcessorDescriptorList.Flink;
      v9->Blink = &ndisPerProcessorDescriptorList;
      v10->Blink = v9;
      ndisPerProcessorDescriptorList.Flink = v9;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v4);
  return FreeSlotFromDescriptor;
}
