/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C000F238
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     RIMFillDeviceHealthInfo @ 0x1C00E1BB0 (RIMFillDeviceHealthInfo.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00F6718 (RIMHandleTTMDeviceArrival.c)
 *     RIMOpenDev @ 0x1C00F7DB0 (RIMOpenDev.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00FAB00 (RIMDeviceNotify.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00FB0DC (RIMRegisterForDeviceChangeNotifications.c)
 *     rimDoRimDevChangeCallback @ 0x1C00FC6B8 (rimDoRimDevChangeCallback.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C00FC720 (rimDoScheduledSecondaryRimPnpWorkPending.c)
 *     rimDoSecondaryRimDevChangeCallback @ 0x1C00FC980 (rimDoSecondaryRimDevChangeCallback.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00FE008 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimIssueReads @ 0x1C00FE140 (rimIssueReads.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x800) != 0 ? 8 : 16;
  }
  else if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
    if ( v4 == 7 )
      return 8LL;
    if ( (unsigned int)(v4 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v4 - 1) <= 3 )
      return 16LL;
  }
  return 0LL;
}
