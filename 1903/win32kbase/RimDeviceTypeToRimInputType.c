/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C006C978
 * Callers:
 *     RIMOpenDev @ 0x1C0067A60 (RIMOpenDev.c)
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeCallback @ 0x1C0069BF8 (rimDoRimDevChangeCallback.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 *     rimCompleteReads @ 0x1C006C048 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C006C104 (rimIssueReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C006CBD8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMRemoveDevOfInputType @ 0x1C006EF3C (RIMRemoveDevOfInputType.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A5A28 (RIMHandleTTMDeviceArrival.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00A6C0C (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMFillDeviceHealthInfo @ 0x1C01385B0 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014D410 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014D638 (RIMHandleTTMDeviceInput.c)
 *     RIMIsInputSuppressed @ 0x1C014D6DC (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C0150950 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0153230 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0153D98 (rimProcessInput.c)
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
