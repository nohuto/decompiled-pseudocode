/*
 * XREFs of IopAcquireFastLock_3 @ 0x140285B2C
 * Callers:
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACDF0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 */

char __fastcall IopAcquireFastLock_3(volatile __int32 *a1)
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
