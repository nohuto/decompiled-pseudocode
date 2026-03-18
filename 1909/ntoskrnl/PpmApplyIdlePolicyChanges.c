/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1402EDF80
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x140195860 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy((_QWORD *)(a1 + 23808));
  return 0LL;
}
