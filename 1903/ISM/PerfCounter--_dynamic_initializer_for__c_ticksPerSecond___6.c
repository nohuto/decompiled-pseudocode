/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___6 @ 0x1800014B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___6()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1801E0C18 = Frequency.QuadPart;
  return result;
}
