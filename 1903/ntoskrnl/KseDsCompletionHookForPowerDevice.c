/*
 * XREFs of KseDsCompletionHookForPowerDevice @ 0x1402B7830
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerCompleted @ 0x1402B7D90 (KsepDsEventDevicePowerCompleted.c)
 */

__int64 __fastcall KseDsCompletionHookForPowerDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventDevicePowerCompleted(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
