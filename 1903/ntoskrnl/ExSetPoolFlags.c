/*
 * XREFs of ExSetPoolFlags @ 0x14033971C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14097D750 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
