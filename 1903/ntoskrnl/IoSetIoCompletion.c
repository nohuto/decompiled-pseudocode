/*
 * XREFs of IoSetIoCompletion @ 0x140697740
 * Callers:
 *     PspSendJobNotification @ 0x1400E6DA4 (PspSendJobNotification.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletion(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, 0LL, 0);
}
