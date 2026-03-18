/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C0008064
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C000655C (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005B884 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = 0;
  v4 = FdoExt(a1);
  Log(a1, 0x10000, 1383290224, a2, 0LL);
  v5 = UsbhFdoCheckUpstreamConnectionState(a1, &v12);
  v6 = UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
  if ( v5 >= 0 )
  {
    v7 = FdoExt(a1);
    if ( *(_QWORD *)(v7 + 4728) )
      v5 = (*(__int64 (__fastcall **)(_QWORD))(v7 + 4728))(*(_QWORD *)(v7 + 1192));
    else
      v5 = -1073741637;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0, v5);
  KeWaitForSingleObject((PVOID)(v4 + 3128), Executive, 0, 0, 0LL);
  v8 = *(_DWORD *)(v4 + 3124);
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
  if ( v8 == 5 )
  {
    Usbh_SSH_Event(a1, 9LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, v5);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    LOBYTE(v11) = 0;
    UsbhException(a1, 0, 137, 0, 0, v5, 0, usbfile_sshub_c, 2306, v11);
  }
  if ( v6 )
    UsbhDecHubBusy(a1, v9, v6);
  Log(a1, 0x10000, 1383290232, 0, v5);
  return (unsigned int)v5;
}
