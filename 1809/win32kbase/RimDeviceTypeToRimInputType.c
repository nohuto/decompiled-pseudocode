/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0051550
 * Callers:
 *     RIMOpenDev @ 0x1C0049C08 (RIMOpenDev.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     rimDoRimDevChangeCallback @ 0x1C004E754 (rimDoRimDevChangeCallback.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0050690 (rimIssueReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0051EF8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00924DC (RIMHandleTTMDeviceArrival.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0092F58 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMFillDeviceHealthInfo @ 0x1C010D840 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMDeviceNotify @ 0x1C0124330 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0127258 (rimProcessInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x1000) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
    return 0LL;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
  if ( v5 == 7 )
    return 8LL;
  if ( (unsigned int)(v5 - 5) <= 1 )
    return 4LL;
  if ( (unsigned int)(v5 - 1) > 3 )
    return 0LL;
  return 16LL;
}
