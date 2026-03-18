/*
 * XREFs of PopWatchdogInit @ 0x140A21D08
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_1404388D8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140443198.Header.Lock = 8LL;
  stru_140443198.Header.WaitListHead.Blink = &stru_140443198.Header.WaitListHead;
  stru_140443198.Header.WaitListHead.Flink = &stru_140443198.Header.WaitListHead;
  qword_140443170 = (__int64)PopPowerActionWatchdog;
  qword_140442C18 = 0LL;
  stru_140443198.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140443198.Processor = 0LL;
  dword_140443158 = 275;
  qword_140443178 = 0LL;
  qword_140443190 = 0LL;
  qword_140443168 = 0LL;
  byte_1404431D8 = 1;
  return PopReleasePolicyLock();
}
