/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x1402D6D28
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1406DB6A4 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BE8 (PopEvaluateAggressiveStandbyActions.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsUserInitiatedMonitorRequestReason(unsigned int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 <= 0x1E )
  {
    v1 = 1073793026;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
