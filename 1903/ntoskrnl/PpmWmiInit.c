/*
 * XREFs of PpmWmiInit @ 0x140A22A0C
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void (*PpmWmiInit())()
{
  void (*result)(); // rax

  PpmWmiIdleAccountingDpc = 275;
  *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
  PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
  PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
  result = PpmWmiIdleAccountingProcedure;
  qword_140438CF8 = (__int64)PpmWmiIdleAccountingProcedure;
  PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
  qword_140438D00 = 0LL;
  qword_140438D18 = 0LL;
  qword_140438CF0 = 0LL;
  return result;
}
