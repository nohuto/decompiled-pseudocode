/*
 * XREFs of Usbh_SSH_HubFailedResume @ 0x1C005DCB4
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00174B0 (UsbhFdoReturnPortStatus.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0006C7C (UsbhUnlockSSH.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubFailedResume(__int64 a1, __int64 a2, __int64 a3)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  FdoExt(a1);
  UsbhUnlockSSH(a3, 6);
  return 3221225473LL;
}
