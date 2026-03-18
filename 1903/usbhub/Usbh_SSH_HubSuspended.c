/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C0006A48
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0006C7C (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C0008588 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3, 4LL);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
  {
LABEL_12:
    UsbhUnlockSSH(a3, 4LL);
    return (unsigned int)-1073741823;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      UsbhUnlockSSH(a3, 5LL);
      UsbhSshResumeDownstream(a1);
      return 0;
    }
    goto LABEL_12;
  }
  UsbhUnlockSSH(a3, 5LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
  v12 = UsbhSshResumeUpstream(a1);
  if ( v12 < 0 )
    Usbh_SSH_Event(*(_QWORD *)(a3 + 8), 9LL, a3);
  return (unsigned int)v12;
}
