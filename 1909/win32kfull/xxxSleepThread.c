/*
 * XREFs of xxxSleepThread @ 0x1C01D6F4C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxSleepThread(unsigned int a1, int a2, int a3, unsigned int a4)
{
  return xxxSleepThread2(a1, a2, a3, a4, 0LL);
}
