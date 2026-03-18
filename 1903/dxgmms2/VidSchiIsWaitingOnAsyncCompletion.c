/*
 * XREFs of VidSchiIsWaitingOnAsyncCompletion @ 0x1C000D49C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsWaitingOnAsyncCompletion(int a1)
{
  return a1 == 5 || a1 == 15;
}
