/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x14078C248
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140720134 (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x140671A30 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x140671CA0 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x140671D00 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

void __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 *i; // rbx
  __int64 v3; // rcx

  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
  {
    if ( PopPowerRequestIsExecutionRequiredCapable((__int64)i)
      && PopPowerRequestIsExecutionRequiredStatusHeld((__int64)i) )
    {
      PopUpdatePowerRequestProcessWakeCounter(v3, a1);
    }
  }
}
