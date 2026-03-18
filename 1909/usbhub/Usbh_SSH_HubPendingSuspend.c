/*
 * XREFs of Usbh_SSH_HubPendingSuspend @ 0x1C00069B4
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0006C7C (UsbhUnlockSSH.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C005DA28 (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // r15
  int v9; // esi
  int v10; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // eax

  v6 = 0;
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v8 = FdoExt(a1);
  v9 = a2 - 1;
  if ( !v9 )
    goto LABEL_8;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v7 = 4;
    goto LABEL_7;
  }
  v12 = v10 - 1;
  if ( !v12 )
    goto LABEL_7;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_15;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_15;
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( (unsigned int)(v15 - 1) >= 2 )
    {
      v6 = -1073741823;
LABEL_8:
      v7 = 2;
      goto LABEL_7;
    }
LABEL_15:
    v6 = -1073741823;
    goto LABEL_8;
  }
  UsbhUnlockSSH(a3, 3LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
  KeWaitForSingleObject((PVOID)(v8 + 3384), Executive, 0, 0, 0LL);
  v7 = UsbhLockSSH(a3, 6LL);
  v16 = 0;
  if ( v7 == 6 )
    v16 = -1073741823;
  v6 = v16;
LABEL_7:
  UsbhUnlockSSH(a3, v7);
  return v6;
}
