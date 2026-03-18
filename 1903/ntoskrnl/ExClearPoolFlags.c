/*
 * XREFs of ExClearPoolFlags @ 0x140339228
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x14097D750 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
