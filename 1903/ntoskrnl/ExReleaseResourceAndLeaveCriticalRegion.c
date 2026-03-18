/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14003D890
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14003D9C0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpFastResourceLegacyRelease @ 0x14016BC98 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int16 v2; // ax
  ULONG_PTR v3; // rdi
  __int64 v4; // rdx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // r8
  struct _KTHREAD *v7; // rcx
  bool v8; // zf
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
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource, v4, KeGetCurrentThread())
      && (v3 & 3) != 3
      && v3 != v6 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v6, v3, 0LL);
    }
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      ExpReleaseResourceSharedForThreadLite(v5, v3, (unsigned __int8 *)&LockHandle);
    else
      ExpReleaseResourceExclusiveForThreadLite(v5, v3);
  }
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable++ == -1;
  if ( v8
    && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
