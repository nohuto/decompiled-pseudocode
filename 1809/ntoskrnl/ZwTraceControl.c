/*
 * XREFs of ZwTraceControl @ 0x1401BB910
 * Callers:
 *     EtwWriteStartScenario @ 0x140716650 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceControl(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
