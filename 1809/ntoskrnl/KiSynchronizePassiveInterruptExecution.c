/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x14029A300
 * Callers:
 *     KeSynchronizeExecution @ 0x1401BD2E0 (KeSynchronizeExecution.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = a2(a3);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return a3;
}
