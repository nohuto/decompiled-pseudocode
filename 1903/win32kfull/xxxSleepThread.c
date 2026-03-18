/*
 * XREFs of xxxSleepThread @ 0x1C01D70CC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxIsDragging @ 0x1C0248118 (xxxIsDragging.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxSleepThread(unsigned int a1, int a2, int a3, int a4)
{
  return xxxSleepThread2(a1, a2, a3, a4, 0LL);
}
