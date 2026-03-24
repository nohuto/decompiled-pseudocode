/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406D0D9C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x1409D7234 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5496) = a2;
}
