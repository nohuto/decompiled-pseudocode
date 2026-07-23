/*
 * XREFs of IoSetIoCompletion @ 0x1406CB5E0
 * Callers:
 *     PspSendJobNotification @ 0x140137EBC (PspSendJobNotification.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
