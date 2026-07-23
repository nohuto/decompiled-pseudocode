/*
 * XREFs of PopPowerAggregatorValidateDirectedDripsCallback @ 0x140877150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorValidateDirectedDripsCallback(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    *a2 = 0;
    return 1LL;
  }
  return result;
}
