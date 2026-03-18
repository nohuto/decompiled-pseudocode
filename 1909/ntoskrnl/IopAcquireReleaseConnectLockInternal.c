/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x14077E5C8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140742F80 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1407437B0 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1407438F8 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
