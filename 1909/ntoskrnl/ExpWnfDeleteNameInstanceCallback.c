/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x1406EF6B0
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x1406ED328 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x140652F64 (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 - 16);
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0);
}
