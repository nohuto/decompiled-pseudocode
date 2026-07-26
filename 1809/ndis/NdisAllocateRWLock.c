/*
 * XREFs of NdisAllocateRWLock @ 0x1C001C480
 * Callers:
 *     EthCreateFilter @ 0x1C00BD4A8 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00F3EF0 (nullCreateFilter.c)
 *     ndisInitializePeriodicReceives @ 0x1C0126C84 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001C520 (ndisAllocatePerProcessorSlot.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK *v4; // rbx
  __int64 PerProcessorSlot; // rax

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7772444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *(_DWORD *)v3 = 827086674;
    v4 = v3;
    PerProcessorSlot = ndisAllocatePerProcessorSlot(2003977294LL);
    v3[4] = PerProcessorSlot;
    if ( PerProcessorSlot )
    {
      v3[1] = (KSPIN_LOCK)NdisHandle;
      KeInitializeSpinLock(v3 + 2);
      v4 = 0LL;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v3 = 0LL;
LABEL_4:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (PNDIS_RW_LOCK_EX)v3;
}
