/*
 * XREFs of PopResetCBTriggers @ 0x14074A148
 * Callers:
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x14073882C (PopDiagTraceBatteryTriggerFlags.c)
 */

__int64 __fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v3 = 0;
  v2 = ~a1;
  do
  {
    *(&PopCB + 6 * result + 75) &= v2;
    PopDiagTraceBatteryTriggerFlags(&v3, (__int64)(&PopCB + 6 * result + 74));
    result = v3 + 1;
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
