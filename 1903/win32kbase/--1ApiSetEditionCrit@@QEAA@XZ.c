/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC
 * Callers:
 *     InputInitialize @ 0x1C0060B14 (InputInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0068BA4 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C006B580 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 *     rimDeviceResetApc @ 0x1C006EE70 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x1C00B44E4 (InputUnInitialize.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C0151E10 (rimDoVirtRimDevChange.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015CE68 (RIMApplyPTPConfigRemedy.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017EB80 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018CDE0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D5F0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ApiSetLeaveEditionCrit @ 0x1C006B654 (ApiSetLeaveEditionCrit.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      60,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) )
    ApiSetLeaveEditionCrit();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        61,
        (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
}
