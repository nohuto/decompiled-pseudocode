/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x14097D918
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14097D78C (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x1409628A4 (IoVerifierCheckForSettingsChange.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !VfIoDisabled )
      _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  }
  VfIoDisabled = v2;
  IoVerifierCheckForSettingsChange(v1);
  return VfWdCheckForSettingsChange(v1);
}
