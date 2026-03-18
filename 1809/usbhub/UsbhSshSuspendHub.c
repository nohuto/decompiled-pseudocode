/*
 * XREFs of UsbhSshSuspendHub @ 0x1C0003CD4
 * Callers:
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0003E08 (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0007068 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C00070B8 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C0007E80 (UsbhSyncBusResume.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rax
  int v7; // edi
  int v9; // r9d
  __int64 v10; // rax
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  v4 = FdoExt(a1);
  v5 = UsbhFdoCheckUpstreamConnectionState(a1, &v12);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)a1, 0x10000, 1400198008, 0, v5);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event(a1, (unsigned int)(v9 + 3), a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((_DWORD)a1, 0x10000, 1400206152, a2, 0LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_START, 0, 0);
    UsbhArmHubWakeOnConnect(a1);
    if ( (unsigned int)UsbhSyncBusPause(a1, a2, 2LL) == 4 )
    {
      v6 = FdoExt(a1);
      if ( *(_QWORD *)(v6 + 4720) )
        v7 = (*(__int64 (__fastcall **)(_QWORD))(v6 + 4720))(*(_QWORD *)(v6 + 1192));
      else
        v7 = -1073741637;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, v7);
      if ( v7 < 0 )
      {
        UsbhSyncBusResume(a1, a2);
        UsbhDisarmHubWakeOnConnect(a1);
        Usbh_SSH_Event(a1, 3LL, a2);
        KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
        LOBYTE(v11) = 0;
        UsbhException((int)a1, 0, 136, 0, 0, v7, 0, usbfile_sshub_c, 2224, v11);
        v10 = FdoExt(a1);
        UsbhEnableTimerObject((_DWORD)a1, v4 + 3200, *(_DWORD *)(v4 + 5256), 0, v10 + 1912, 2001228627);
      }
      else
      {
        UsbhDisableTimerObject(a1, v4 + 3200);
        Usbh_SSH_Event(a1, 2LL, a2);
      }
    }
    else
    {
      v7 = -1073741823;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect(a1);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      *(_BYTE *)(v4 + 3416) = 1;
      Usbh_SSH_Event(a1, 3LL, a2);
      KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    }
    return (unsigned int)v7;
  }
}
