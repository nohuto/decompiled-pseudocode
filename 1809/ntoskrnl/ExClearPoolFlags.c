/*
 * XREFs of ExClearPoolFlags @ 0x14031A47C
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x14093DEAC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
