/*
 * XREFs of PopIsUserInitiatedMonitorRequestReason @ 0x1402F1708
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140720134 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A4938 (PopEvaluateAggressiveStandbyActions.c)
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
