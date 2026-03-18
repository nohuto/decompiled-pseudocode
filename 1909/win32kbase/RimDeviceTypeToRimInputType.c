/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0058A18
 * Callers:
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeCallback @ 0x1C0055C98 (rimDoRimDevChangeCallback.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00581A4 (rimIssueReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0058C78 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMRemoveDevOfInputType @ 0x1C005B43C (RIMRemoveDevOfInputType.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00A5D3C (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0135F40 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014ADA0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014AFC8 (RIMHandleTTMDeviceInput.c)
 *     RIMIsInputSuppressed @ 0x1C014B06C (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C014E2E0 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0151BA0 (rimProcessInput.c)
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
