/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34
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
 *     ApiSetEnterEditionCrit @ 0x1C006BACC (ApiSetEnterEditionCrit.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2, unsigned int a3)
{
  int v4; // edi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      58,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  *(_DWORD *)this = v4;
  if ( v4 )
    *((_DWORD *)this + 1) = ApiSetEnterEditionCrit(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      59,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return this;
}
