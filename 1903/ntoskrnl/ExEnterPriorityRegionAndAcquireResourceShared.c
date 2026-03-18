/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x1401027C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  struct _KTHREAD *v4; // r8
  __int64 v5; // r9
  __int16 v6; // ax
  unsigned __int8 CurrentIrql; // dl
  void *OwnerEntryForLegacyShim; // rsi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_WORD *)(BugCheckParameter2 + 26) & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  v6 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v4 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v4->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v4->MiscFlags & 0x400) == 0 && !v4->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v6 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v3);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite(BugCheckParameter2, 1, (__int64)v4, v5);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
