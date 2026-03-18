/*
 * XREFs of PopWatchdogInit @ 0x140A21DE8
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140438858 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140443118.Header.Lock = 8LL;
  stru_140443118.Header.WaitListHead.Blink = &stru_140443118.Header.WaitListHead;
  stru_140443118.Header.WaitListHead.Flink = &stru_140443118.Header.WaitListHead;
  qword_1404430F0 = (__int64)PopPowerActionWatchdog;
  qword_140442BB8 = 0LL;
  stru_140443118.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140443118.Processor = 0LL;
  dword_1404430D8 = 275;
  qword_1404430F8 = 0LL;
  qword_140443110 = 0LL;
  qword_1404430E8 = 0LL;
  byte_140443158 = 1;
  return PopReleasePolicyLock();
}
