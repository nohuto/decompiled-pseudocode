/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1402D3D40
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14018B9E0 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
