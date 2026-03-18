/*
 * XREFs of IopDeleteIoCompletion @ 0x1406778E0
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1400E3358 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopDeleteIoCompletion(KSPIN_LOCK *a1)
{
  return IopDeleteIoCompletionInternal(a1, 0LL);
}
