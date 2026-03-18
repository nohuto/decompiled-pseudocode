/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C001B740
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C0002720 (UsbhSshPropagateResume.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_WaitWake @ 0x1C0005850 (UsbhFdoPower_WaitWake.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C00064D8 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C000655C (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C0006C70 (UsbhSshResumePort.c)
 *     UsbhArmHubForWakeDetect @ 0x1C000730C (UsbhArmHubForWakeDetect.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0007DA0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhFdoColdStartPdo @ 0x1C0008D5C (UsbhFdoColdStartPdo.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C000C200 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhReset1Complete @ 0x1C000F680 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001FFE0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhGetDeviceInformation @ 0x1C0025384 (UsbhGetDeviceInformation.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C004B1F0 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C00550E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0055B10 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0055BF0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C00560B0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0056190 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C00562F0 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  if ( dword_1C006E650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_8:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_8;
  }
}
