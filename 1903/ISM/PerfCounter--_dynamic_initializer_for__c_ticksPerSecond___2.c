/*
 * XREFs of PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___2 @ 0x180001330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL PerfCounter::_dynamic_initializer_for__c_ticksPerSecond___2()
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  return QueryPerformanceFrequency(&Frequency);
}
