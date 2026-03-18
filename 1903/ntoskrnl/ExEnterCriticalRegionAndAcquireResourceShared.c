/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x14003B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // rdx
  __int16 v4; // ax
  struct _KTHREAD *v6; // r8
  void *OwnerEntryForLegacyShim; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(CurrentThread) = Resource->Flag;
  CurrentIrql = (unsigned __int8)CurrentThread;
  if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v6->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v6->MiscFlags & 0x400) == 0 && !v6->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v4 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared((ULONG_PTR)Resource, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(CurrentIrql) = 1;
    ExpAcquireResourceSharedLite(Resource, CurrentIrql);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
