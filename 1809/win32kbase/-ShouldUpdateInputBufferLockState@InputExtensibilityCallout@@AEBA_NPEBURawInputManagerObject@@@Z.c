/*
 * XREFs of ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0148FF8
 * Callers:
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0148EDC (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C014901C (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputExtensibilityCallout::ShouldUpdateInputBufferLockState(
        InputExtensibilityCallout *this,
        const struct RawInputManagerObject *a2)
{
  char v2; // cl

  v2 = 0;
  if ( *((_BYTE *)a2 + 80) && !*((_BYTE *)a2 + 81) || (*((_DWORD *)a2 + 221) & 2) != 0 )
    return 1;
  return v2;
}
