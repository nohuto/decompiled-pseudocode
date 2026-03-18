/*
 * XREFs of UsbhUnlockSSH @ 0x1C0006C7C
 * Callers:
 *     Usbh_SSH_HubPendingSuspend @ 0x1C00069B4 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0006A48 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0006B28 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00174B0 (UsbhFdoReturnPortStatus.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C005DCB4 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005DD30 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhUnlockSSH(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(v2 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(v2, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(v2, *(_QWORD *)(v2 + 64));
  v5 = *(unsigned int *)(v4 + 3456);
  *(_DWORD *)(v4 + 3124) = a2;
  *(_DWORD *)(32 * v5 + v4 + 3468) = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *(_QWORD *)(v4 + 3192) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
}
