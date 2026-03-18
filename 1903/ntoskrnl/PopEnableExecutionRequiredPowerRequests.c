/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x140789DE8
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14071E2A4 (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A0258 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A0280 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x1406A0520 (PopPowerRequestIsExecutionRequiredCapable.c)
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
