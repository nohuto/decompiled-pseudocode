/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C000C95C
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C000C910 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(__int64 a1, IRP *a2)
{
  __int64 v4; // rax

  v4 = FdoExt(a1);
  Usbh_SSH_Event(a1, 8LL, v4 + 1912);
  Log(a1, 32, 1734503506, (_DWORD)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
