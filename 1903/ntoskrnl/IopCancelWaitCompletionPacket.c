/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x140114550
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x140114310 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x140114450 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x140008590 (ObpGetWaitObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeDeregisterObjectNotification @ 0x140114660 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x140114718 (KeRemoveQueueEntry.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, KIRQL a3)
{
  void *v3; // rbp
  __int16 *WaitObject; // rax
  __int16 *v8; // rcx
  char v9; // al
  void *v10; // rdi

  v3 = (void *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject((__int64)v3 - 48);
  v8 = 0LL;
  if ( WaitObject != &ObpDefaultObject )
    v8 = WaitObject;
  v9 = KeDeregisterObjectNotification(v8);
  v10 = (void *)Object[11];
  if ( !v9 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KeReleaseSpinLock(Object + 12, a3);
  ObfDereferenceObject(v3);
  ObfDereferenceObject(v10);
  ObfDereferenceObject(Object);
  return 1;
}
