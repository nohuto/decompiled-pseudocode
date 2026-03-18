/*
 * XREFs of KiFlushProcessTbWorker @ 0x140127960
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
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
