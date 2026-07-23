/*
 * XREFs of VfSettingsCheckForChanges @ 0x14093EEE8
 * Callers:
 *     VfSetVerifierInformation @ 0x14094BA20 (VfSetVerifierInformation.c)
 * Callees:
 *     ViHalApplySettings @ 0x14092EBCC (ViHalApplySettings.c)
 *     VfPendingCheckForChanges @ 0x1409346C4 (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x14093BAEC (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x14093E15C (ViDeadlockDetectionApplySettings.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14093EEAC (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14093F018 (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x14093F07C (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(unsigned __int16 a1, __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  BOOL v8; // eax
  char v9; // di
  BOOL v10; // ecx
  BOOL v11; // eax
  _BOOL8 v12; // rcx

  VfKeCheckForChanges(a4);
  v8 = 0;
  v9 = a3 & a1;
  if ( (a2 & 8) != 0 )
  {
    v8 = (a1 & 8) == 0;
    v10 = v8;
  }
  else
  {
    v10 = (v9 & 8) != 0;
  }
  if ( v10 )
  {
    if ( v8 )
      MmTrackLockedPages = 1;
    else
      MmTrackLockedPages |= 0x10000000u;
  }
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      goto LABEL_13;
  }
  else if ( (v9 & 0x20) == 0 )
  {
    goto LABEL_13;
  }
  ViDeadlockDetectionApplySettings();
LABEL_13:
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (v9 & 0x80) == 0 )
      goto LABEL_18;
  }
  else if ( (a1 & 0x80) != 0 )
  {
    goto LABEL_18;
  }
  ViHalApplySettings();
LABEL_18:
  if ( (a2 & 0x800) != 0 )
  {
    v11 = (a1 & 0x800) == 0;
    v12 = (a1 & 0x800) == 0;
  }
  else
  {
    if ( (a3 & a1 & 0x800) == 0 )
      goto LABEL_24;
    v11 = 1;
    v12 = 0LL;
  }
  if ( v11 )
  {
    ViSettingsEnableKernelHandleChecking(v12);
    VfSettingsApplyMiscellaneousChecks(~a3 & (a2 | a1));
  }
LABEL_24:
  VfPendingCheckForChanges(a4);
}
