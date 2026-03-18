/*
 * XREFs of PopInitModernSleepEnabledActions @ 0x140A22E9C
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitModernSleepEnabledActions()
{
  __int64 result; // rax

  result = (unsigned int)PopAggressiveStandbyActionsRegValue;
  if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
    PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
  return result;
}
