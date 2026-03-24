/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x140755DF4
 * Callers:
 *     IoDisconnectInterrupt @ 0x140710350 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140710B5C (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140710C4C (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 1) != 0 )
  {
    v3 = (struct _KEVENT *)(a1 + 40);
  }
  else if ( (a3 & 2) != 0 )
  {
    v3 = &ActiveConnectListLock;
  }
  else
  {
    v3 = *(struct _KEVENT **)(a1 + 24);
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    return (unsigned int)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
