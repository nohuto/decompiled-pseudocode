/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C00081C0
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhSshResumePort @ 0x1C0006C70 (UsbhSshResumePort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0007F68 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C0008064 (UsbhSshResumeUpstream.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004FB10 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C00506C0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rbx
  PIRP v5; // rax
  IRP *v6; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r9d
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(
         0x220013u,
         *(PDEVICE_OBJECT *)(v4 + 1208),
         0LL,
         0,
         0LL,
         0,
         1u,
         &Object,
         &IoStatusBlock);
  v6 = v5;
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v9 = *a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1400074357;
      *(_QWORD *)(v11 + 24) = Status;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
    }
  }
  return (unsigned int)Status;
}
