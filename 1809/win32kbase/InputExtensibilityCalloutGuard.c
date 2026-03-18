/*
 * XREFs of InputExtensibilityCalloutGuard @ 0x1C0149320
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void __fastcall InputExtensibilityCalloutGuard(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(
      *(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      a2,
      a3);
}
