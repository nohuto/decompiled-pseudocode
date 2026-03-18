/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x14093DEAC
 * Callers:
 *     VfInitVerifierComponents @ 0x1409266D0 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14093DEE8 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x14031A37C (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x14031A85C (ExSetPoolFlags.c)
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  bool v1; // cf
  int v2; // ecx

  v1 = (a1 & 0x800) != 0;
  v2 = (MmVerifierData & 0x400000) == 0 ? 0x206 : 0;
  if ( v1 )
    ExSetPoolFlags(v2);
  else
    ExClearPoolFlags(v2);
}
