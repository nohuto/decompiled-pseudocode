/*
 * XREFs of ExSetPoolFlags @ 0x14031A95C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409265A0 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409266D0 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14093DEAC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
