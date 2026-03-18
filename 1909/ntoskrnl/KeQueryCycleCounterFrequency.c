/*
 * XREFs of KeQueryCycleCounterFrequency @ 0x14013DC60
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1407774E8 (PopConfigureHeteroPolicies.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryCycleCounterFrequency(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 68);
  if ( !a2 )
    result *= 1000000LL;
  return result;
}
