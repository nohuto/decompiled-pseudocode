/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___14 @ 0x1800016D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___14()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1801E0C68 = Frequency.QuadPart;
  return result;
}
