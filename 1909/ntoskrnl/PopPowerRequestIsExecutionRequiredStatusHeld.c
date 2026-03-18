/*
 * XREFs of PopPowerRequestIsExecutionRequiredStatusHeld @ 0x140671D00
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14078C248 (PopEnableExecutionRequiredPowerRequests.c)
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
