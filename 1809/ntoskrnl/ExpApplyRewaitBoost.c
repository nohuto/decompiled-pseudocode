/*
 * XREFs of ExpApplyRewaitBoost @ 0x14015FF20
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 */

void __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
}
