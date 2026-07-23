/*
 * XREFs of KiFlushProcessTbWorker @ 0x140125560
 * Callers:
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KiFlushProcessTbWorker()
{
  unsigned __int64 result; // rax

  result = __readcr3();
  __writecr3(result);
  return result;
}
