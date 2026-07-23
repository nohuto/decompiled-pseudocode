/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14004F450
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14004F570 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpFastResourceLegacyRelease @ 0x140164C28 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int16 v2; // ax
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // r8
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Resource->Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
  {
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v3 = (ULONG_PTR)KeGetCurrentThread();
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource) && (v3 & 3) != 3 && v3 != v5 )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v5, v3, 0LL);
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      ExpReleaseResourceSharedForThreadLite(v4, v3, &LockHandle);
    else
      ExpReleaseResourceExclusiveForThreadLite(v4, v3, &LockHandle);
  }
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable++ == -1;
  if ( v7
    && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v6);
  }
}
