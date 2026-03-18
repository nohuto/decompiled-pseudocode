/*
 * XREFs of KeSetMaxDynamicTickDuration @ 0x1402A5C04
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetMaxDynamicTickDuration(unsigned __int64 a1)
{
  __int64 result; // rax

  result = KeMaximumIncrement;
  if ( KeMaximumIncrement < a1 )
    a1 = KeMaximumIncrement;
  _InterlockedExchange64(&KiMaxDynamicTickDuration, a1);
  return result;
}
