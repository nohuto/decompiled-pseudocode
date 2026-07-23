/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x14093F07C
 * Callers:
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14093EEE8 (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x140924740 (IoVerifierCheckForSettingsChange.c)
 *     VfWdCheckForSettingsChange @ 0x14093F5FC (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) == 0 && !VfIoDisabled )
    _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  VfIoDisabled = (v1 & 0x10) == 0;
  IoVerifierCheckForSettingsChange(v1);
  return VfWdCheckForSettingsChange(v1);
}
