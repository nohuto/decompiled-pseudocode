/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C001C210
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C000285C (UsbhSshPropagateResume.c)
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_WaitWake @ 0x1C0005D10 (UsbhFdoPower_WaitWake.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C00069B4 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0006A48 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0007828 (UsbhArmHubForWakeDetect.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00082C0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSshResumeUpstream @ 0x1C0008588 (UsbhSshResumeUpstream.c)
 *     UsbhFdoColdStartPdo @ 0x1C000928C (UsbhFdoColdStartPdo.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C000C5D0 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0020D30 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetDeviceInformation @ 0x1C00262B8 (UsbhGetDeviceInformation.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C004CB60 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C004CFA4 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0057300 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0057DF0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0057EE0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0058060 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C00583E0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00584D0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0058650 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  __int64 result; // rax
  _DWORD *v7; // rdx
  const GUID *v8; // rdx
  __int128 v9; // [rsp+98h] [rbp+1Fh] BYREF

  result = 0LL;
  v9 = 0uLL;
  if ( dword_1C006F650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v7 = *(_DWORD **)(a1 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v7 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v7);
    if ( a3 )
    {
      v9 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v9) < 0 )
    {
      v8 = 0LL;
      return UsbhEtwWrite(a4, v8);
    }
    v8 = (const GUID *)&v9;
    return UsbhEtwWrite(a4, v8);
  }
  return result;
}
