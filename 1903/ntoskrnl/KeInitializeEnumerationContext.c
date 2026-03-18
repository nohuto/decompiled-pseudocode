/*
 * XREFs of KeInitializeEnumerationContext @ 0x1400B9050
 * Callers:
 *     PpmParkReportParkedCores @ 0x14011E5D0 (PpmParkReportParkedCores.c)
 *     PopConfigureHeteroPolicies @ 0x140773F08 (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeEnumerationContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 16) = 0;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = a2;
  return result;
}
