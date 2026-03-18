/*
 * XREFs of ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00921C0
 * Callers:
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C014901C (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     <none>
 */

void __fastcall InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(
        InputExtensibilityCallout *this)
{
  LONG v1; // r8d

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 2), 0, v1, 0);
    *((_DWORD *)this + 3) = 0;
  }
}
