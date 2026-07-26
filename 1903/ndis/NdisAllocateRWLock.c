/*
 * XREFs of NdisAllocateRWLock @ 0x1C0026250
 * Callers:
 *     EthCreateFilter @ 0x1C003DE04 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00A3714 (nullCreateFilter.c)
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 * Callees:
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C002635C (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00395D4 (ndisAllocatePerProcessorPageDescriptor.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v7; // r14
  struct _LIST_ENTRY **v8; // rcx
  __int64 FreeSlotFromDescriptor; // rsi
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rax

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7772444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *(_DWORD *)v3 = 827086674;
    v4 = v3;
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    Flink = ndisPerProcessorDescriptorList.Flink;
    v7 = v5;
    while ( Flink != &ndisPerProcessorDescriptorList )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, 2003977294LL);
      if ( FreeSlotFromDescriptor )
        goto LABEL_5;
      Flink = *v8;
    }
    FreeSlotFromDescriptor = 0LL;
LABEL_5:
    if ( !FreeSlotFromDescriptor )
    {
      PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
      if ( PerProcessorPageDescriptor )
      {
        FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, 2003977294LL);
        v13 = ndisPerProcessorDescriptorList.Flink;
        if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
          __fastfail(3u);
        v12->Flink = ndisPerProcessorDescriptorList.Flink;
        v12->Blink = &ndisPerProcessorDescriptorList;
        v13->Blink = v12;
        ndisPerProcessorDescriptorList.Flink = v12;
      }
    }
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v7);
    v3[4] = FreeSlotFromDescriptor;
    if ( FreeSlotFromDescriptor )
    {
      v3[1] = (KSPIN_LOCK)NdisHandle;
      KeInitializeSpinLock(v3 + 2);
      v4 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v3 = 0LL;
LABEL_8:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (PNDIS_RW_LOCK_EX)v3;
}
