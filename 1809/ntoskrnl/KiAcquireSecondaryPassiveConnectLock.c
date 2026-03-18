/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x1402932C4
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x140293354 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402934E4 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
