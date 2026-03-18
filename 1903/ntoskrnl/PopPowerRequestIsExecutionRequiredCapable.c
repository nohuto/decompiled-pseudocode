/*
 * XREFs of PopPowerRequestIsExecutionRequiredCapable @ 0x1406A0520
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A057C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140789DE8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredCapable(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 120) )
    return **(_DWORD **)(a1 + 80) != 0;
  return v1;
}
