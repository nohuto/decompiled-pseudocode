/*
 * XREFs of PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A0258
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A057C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140789DE8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredStatusHeld(__int64 a1)
{
  bool result; // al

  result = *(_DWORD *)(a1 + 44) != 0;
  if ( PopPowerRequestConvertSystemToExecution )
  {
    if ( *(_DWORD *)(a1 + 36) )
      return 1;
  }
  return result;
}
