/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140114310
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x140114550 (IopCancelWaitCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PVOID v3; // rbp
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // r14
  KIRQL v8; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result >= 0 )
  {
    v3 = Object;
    v4 = (KSPIN_LOCK *)((char *)Object + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
    v7 = v5;
    if ( v6 )
      ObfReferenceObject(*((PVOID *)v3 + 11));
    KeReleaseSpinLock(v4, v7);
    if ( !v6 )
      return -1073741536;
    KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
    v8 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( *((_BYTE *)v3 + 104) )
    {
      if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
      {
LABEL_7:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ObfDereferenceObject(v6);
        ObfDereferenceObject(Object);
        return v2;
      }
      if ( *((_BYTE *)v3 + 104) )
        v2 = 259;
    }
    else
    {
      v2 = -1073741536;
    }
    KeReleaseSpinLock(v4, v8);
    goto LABEL_7;
  }
  return result;
}
