/*
 * XREFs of PfVerifyScenarioId @ 0x14065D6CC
 * Callers:
 *     PfVerifyTraceBuffer @ 0x14065D550 (PfVerifyTraceBuffer.c)
 *     PfVerifyScenarioBuffer @ 0x1406B45A0 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfVerifyScenarioId(__int64 a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 29;
  for ( i = 29LL; i >= 0; --i )
  {
    if ( !*(_WORD *)(a1 + 2 * i) )
      break;
    --v1;
  }
  return v1 > 0;
}
