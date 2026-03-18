/*
 * XREFs of PfVerifyScenarioId @ 0x14066F92C
 * Callers:
 *     PfVerifyTraceBuffer @ 0x14066F7B0 (PfVerifyTraceBuffer.c)
 *     PfVerifyScenarioBuffer @ 0x140670D80 (PfVerifyScenarioBuffer.c)
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
