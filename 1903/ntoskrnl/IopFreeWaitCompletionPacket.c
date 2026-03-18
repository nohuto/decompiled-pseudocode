/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x14013AA94
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400AA358 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(_QWORD *Object, PVOID a2)
{
  void *v2; // rdi
  KIRQL v5; // al

  v2 = (void *)Object[10];
  v5 = KeAcquireSpinLockRaiseToDpc(Object + 12);
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KeReleaseSpinLock(Object + 12, v5);
  ObfDereferenceObject(v2);
  ObfDereferenceObject(a2);
  return ObfDereferenceObject(Object);
}
