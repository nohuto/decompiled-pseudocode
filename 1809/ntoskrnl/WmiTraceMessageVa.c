/*
 * XREFs of WmiTraceMessageVa @ 0x14030F070
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(__int64 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
