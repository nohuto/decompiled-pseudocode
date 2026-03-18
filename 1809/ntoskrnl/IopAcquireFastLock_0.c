/*
 * XREFs of IopAcquireFastLock_0 @ 0x1400DD9B4
 * Callers:
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

char __fastcall IopAcquireFastLock_0(volatile __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(a1 + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
