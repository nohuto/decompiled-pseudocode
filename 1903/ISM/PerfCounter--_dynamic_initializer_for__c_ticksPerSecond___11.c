/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___11 @ 0x1800015F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___11()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1801E0C48 = Frequency.QuadPart;
  return result;
}
