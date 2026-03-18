/*
 * XREFs of PpmWmiInit @ 0x140A22AEC
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
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
  qword_140438C78 = (__int64)PpmWmiIdleAccountingProcedure;
  PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
  qword_140438C80 = 0LL;
  qword_140438C98 = 0LL;
  qword_140438C70 = 0LL;
  return result;
}
