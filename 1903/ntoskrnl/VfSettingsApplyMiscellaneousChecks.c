/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x14097D750
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14097D78C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140339228 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x14033971C (ExSetPoolFlags.c)
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
