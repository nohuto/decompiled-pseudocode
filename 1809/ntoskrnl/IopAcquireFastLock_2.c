/*
 * XREFs of IopAcquireFastLock_2 @ 0x140117B28
 * Callers:
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

char __fastcall IopAcquireFastLock_2(volatile __int32 *a1)
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
