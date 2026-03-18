/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406F1E48
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140A1A484 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5496) = a2;
}
