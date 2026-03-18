/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1402D3A50
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14018B880 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
