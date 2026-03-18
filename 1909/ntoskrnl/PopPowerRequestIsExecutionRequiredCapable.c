/*
 * XREFs of PopPowerRequestIsExecutionRequiredCapable @ 0x140671A30
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14078C248 (PopEnableExecutionRequiredPowerRequests.c)
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
