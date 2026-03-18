/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005B884
 * Callers:
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0016D40 (UsbhFdoReturnPortStatus.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C0006770 (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C005B618 (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edx
  int v12; // eax

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v7 = FdoExt(a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 3;
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    UsbhUnlockSSH(a3, 5);
    UsbhSshResumeUpstream(a1, a3);
    return v6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 3 )
    {
      UsbhUnlockSSH(a3, 3);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 3);
    KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
    v11 = UsbhLockSSH(a3, 6);
    v12 = 0;
    if ( v11 == 6 )
      v12 = -1073741823;
    v6 = v12;
LABEL_15:
    UsbhUnlockSSH(a3, v11);
    return v6;
  }
  UsbhUnlockSSH(a3, 1);
  if ( !*((_BYTE *)v7 + 3416) )
    UsbhSshResumeDownstream(a1, a3, 0);
  return v6;
}
