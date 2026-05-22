/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___3 @ 0x1800018F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___3()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_180193A58 = Frequency.QuadPart;
  return result;
}
