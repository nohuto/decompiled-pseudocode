/*
 * XREFs of PopResetCBTriggers @ 0x140748E1C
 * Callers:
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071B684 (PopDiagTraceBatteryTriggerFlags.c)
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
    *((_DWORD *)&PopCB + 6 * result + 75) &= v2;
    PopDiagTraceBatteryTriggerFlags(&v3, (__int64)(&PopCB + 3 * result + 37));
    result = v3 + 1;
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
