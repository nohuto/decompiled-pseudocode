/*
 * XREFs of InputExtensibilityCalloutGuard @ 0x1C01212A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void __fastcall InputExtensibilityCalloutGuard(__int64 a1, __int64 a2, __int64 a3)
{
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout, a2, a3);
}
