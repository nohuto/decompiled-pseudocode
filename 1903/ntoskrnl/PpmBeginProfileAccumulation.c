/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406F03A8
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x1409ED550 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5496) = a2;
}
