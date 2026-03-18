/*
 * XREFs of IopInterlockedRemoveHeadList @ 0x140153AC8
 * Callers:
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     IopCallDriverReinitializationRoutines @ 0x140708844 (IopCallDriverReinitializationRoutines.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A0F640 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

_QWORD *__fastcall IopInterlockedRemoveHeadList(_QWORD **a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *a1;
  if ( *a1 == a1 )
  {
    v3 = 0LL;
  }
  else
  {
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
