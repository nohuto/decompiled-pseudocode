/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406D203C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x1409D8234 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5496) = a2;
}
