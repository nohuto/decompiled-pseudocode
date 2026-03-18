/*
 * XREFs of IopInterlockedInsertHeadList @ 0x140195E1C
 * Callers:
 *     IoRegisterLastChanceShutdownNotification @ 0x140776830 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1407768B0 (IoRegisterShutdownNotification.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertHeadList(__int64 *a1, _QWORD *a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v5;
  a2[1] = a1;
  *(_QWORD *)(v5 + 8) = a2;
  *a1 = (__int64)a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
