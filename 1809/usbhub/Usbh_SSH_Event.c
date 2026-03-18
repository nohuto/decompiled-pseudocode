/*
 * XREFs of Usbh_SSH_Event @ 0x1C000FEE0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001090 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubSuspended @ 0x1C000655C (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C000C31C (UsbhInternalIoctlPropagateResume.c)
 *     UsbhHubSSH_Worker @ 0x1C000F5B0 (UsbhHubSSH_Worker.c)
 *     UsbhQueryBusRelations @ 0x1C0010640 (UsbhQueryBusRelations.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011500 (UsbhAcquireEnumBusLock.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001F1F0 (UsbhPdoPnp_QueryId.c)
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C004F3F0 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004FB10 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C00506C0 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x1C005B6E0 (UsbhSShResumeWorker.c)
 * Callees:
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C00064D8 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C000655C (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C000662C (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C0006770 (UsbhUnlockSSH.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0009C10 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C005B818 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005B884 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  char *DeviceExtension; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids,
      a2);
  v6 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
    goto LABEL_60;
  v7 = *(_QWORD *)(v6 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v6, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64));
  KeWaitForSingleObject((PVOID)(v7 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v7 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v7 + 3456);
  v9 = 32LL * (v8 & 7);
  if ( *(_DWORD *)(v9 + v7 + 3460) != a2
    || (v10 = *(unsigned int *)(v7 + 3124), *(_DWORD *)(v9 + v7 + 3464) != (_DWORD)v10) )
  {
    v17 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v17;
    v17 *= 32LL;
    *(_DWORD *)(v17 + v7 + 3460) = a2;
    *(_DWORD *)(v17 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
    v10 = *(unsigned int *)(v7 + 3124);
  }
  if ( (_DWORD)v10 != 1 )
  {
    switch ( (_DWORD)v10 )
    {
      case 2:
        return (unsigned int)Usbh_SSH_HubPendingSuspend((__int64)a1, a2, a3);
      case 3:
        return (unsigned int)Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
      case 4:
        return (unsigned int)Usbh_SSH_HubSuspended((__int64)a1, a2, a3);
      case 5:
        return (unsigned int)Usbh_SSH_HubPendingResume((__int64)a1, a2, a3);
      case 6:
        return (unsigned int)Usbh_SSH_HubFailedResume(a1, v10, a3);
      default:
        v15 = -1073741823;
        UsbhUnlockSSH(a3, v10);
        break;
    }
    return v15;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  if ( !a1 )
    goto LABEL_60;
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  if ( a2 == 6 )
  {
    DeviceExtension[3408] = 1;
    v12 = *(_QWORD *)(a3 + 8);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 64);
      if ( !v13 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
      if ( *(_DWORD *)v13 != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v12 + 64));
      v14 = *(unsigned int *)(v13 + 3456);
      *(_DWORD *)(v13 + 3124) = 1;
      *(_DWORD *)(32 * v14 + v13 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v13 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 3128), 16, 1, 0);
      return 0;
    }
LABEL_60:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  if ( a2 == 1 )
  {
    if ( DeviceExtension[3408]
      || *((char **)DeviceExtension + 388) != DeviceExtension + 3104
      || *((_DWORD *)DeviceExtension + 780)
      || *((char **)DeviceExtension + 603) != DeviceExtension + 4824
      || (*((_DWORD *)DeviceExtension + 640) & 0x10) != 0
      || *((int *)DeviceExtension + 685) > 1
      || (int)UsbhSsh_CheckPortChangeQueuesIdle((__int64)a1) < 0 )
    {
      v15 = -1073741823;
    }
    else
    {
      v15 = 0;
    }
    DeviceExtension[3408] = 0;
    if ( (v15 & 0x80000000) == 0 )
    {
      KeResetEvent((PRKEVENT)DeviceExtension + 141);
      DeviceExtension[3416] = 0;
      UsbhUnlockSSH(a3, 2);
      UsbhSshSuspendHub(a1, a3);
    }
    else
    {
      v18 = FdoExt(*(_QWORD *)(a3 + 8));
      v19 = 32LL * *(unsigned int *)(v18 + 3456);
      *(_DWORD *)(v18 + 3124) = 1;
      *(_DWORD *)(v19 + v18 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v18 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 3128), 16, 1, 0);
      KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
      if ( !*((_QWORD *)DeviceExtension + 414)
        && !*((_QWORD *)DeviceExtension + 413)
        && !*((_QWORD *)DeviceExtension + 412) )
      {
        v20 = FdoExt(a1);
        UsbhEnableTimerObject(
          (__int64)a1,
          (__int64)(DeviceExtension + 3200),
          *((_DWORD *)DeviceExtension + 1314),
          0,
          v20 + 1912,
          0x77485353u);
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 4u:
        v21 = *((_QWORD *)DeviceExtension + 413);
        UsbhUnlockSSH(a3, 1);
        v15 = v21 != 0 ? 0xC0000001 : 0;
        break;
      case 5u:
        UsbhUnlockSSH(a3, 1);
        return 0;
      default:
        UsbhUnlockSSH(a3, 1);
        v15 = -1073741823;
        break;
    }
  }
  return v15;
}
