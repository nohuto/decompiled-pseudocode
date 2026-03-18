/*
 * XREFs of UsbhSyncSendCommand @ 0x1C0017B10
 * Callers:
 *     UsbhSetHubRemoteWake @ 0x1C0007214 (UsbhSetHubRemoteWake.c)
 *     UsbhSuspendPort @ 0x1C000BB60 (UsbhSuspendPort.c)
 *     UsbhResumePort @ 0x1C000BDF8 (UsbhResumePort.c)
 *     UsbhResetPort @ 0x1C0010FF0 (UsbhResetPort.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0019FF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhHubAckPortChange @ 0x1C001A2A0 (UsbhHubAckPortChange.c)
 *     UsbhIsHighSpeedCapable @ 0x1C001D588 (UsbhIsHighSpeedCapable.c)
 *     UsbhQueryHubState @ 0x1C001DC3C (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C001DDCC (UsbhGetStatus.c)
 *     UsbhGetDescriptor @ 0x1C001E07C (UsbhGetDescriptor.c)
 *     UsbhFlushPortChange @ 0x1C003EB68 (UsbhFlushPortChange.c)
 *     UsbhGetPortStatus @ 0x1C003F2F8 (UsbhGetPortStatus.c)
 *     UsbhSetPortPower @ 0x1C003F8B0 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C0040DB4 (UsbhSetPortIndicator.c)
 *     UsbhClearTt @ 0x1C0046ACC (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C00471D4 (UsbhDisablePort.c)
 *     UsbhHubAckHubChange @ 0x1C0047A90 (UsbhHubAckHubChange.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0059120 (UsbhPdoCheckBootDeviceReady.c)
 * Callees:
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_qDDDDDDDDD @ 0x1C0040604 (WPP_RECORDER_SF_qDDDDDDDDD.c)
 */

__int64 __fastcall UsbhSyncSendCommand(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, int a5, _DWORD *a6)
{
  _WORD *v6; // rsi
  __int64 v10; // r15
  PIRP v11; // rax
  IRP *v12; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int *PoolWithTag; // rax
  int *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PIRP v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  NTSTATUS v27; // eax
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  int OutputBuffer; // [rsp+20h] [rbp-E8h]
  struct _IO_STATUS_BLOCK v36; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  struct _KEVENT Object; // [rsp+A0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+110h] [rbp+8h] BYREF
  char *v41; // [rsp+118h] [rbp+10h]
  _WORD *v42; // [rsp+128h] [rbp+20h]

  v42 = a4;
  v41 = (char *)a2;
  memset(&Object, 0, sizeof(Object));
  v6 = a4;
  v40 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v10 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v40;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v15 = v40;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      a5 = 1400074357;
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = a5;
      *(_QWORD *)(v17 + 24) = Status;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    if ( a6 )
      *a6 = -1073713152;
    return (unsigned int)Status;
  }
  else
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x88uLL, 0x42554855u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 0x88uLL);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        a5 = 811823987;
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = a5;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(v21 + 24) = 0LL;
      }
    }
    if ( v19 )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v22 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v10 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v36);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v23 = *(_QWORD *)(a1 + 64);
        if ( v23 )
        {
          a5 = 828601203;
          v24 = *(_QWORD *)(v23 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
          *(_DWORD *)v24 = a5;
          *(_QWORD *)(v24 + 24) = &v36;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v22;
        }
      }
      if ( v22 )
      {
        v19[8] = 10;
        v25 = v19[8];
        *((_QWORD *)v19 + 1) = 0LL;
        *v19 = 3276936;
        if ( *(char *)a2 < 0 )
          v25 = 11;
        v19[8] = v25;
        v26 = (unsigned __int16)*v6;
        *((_QWORD *)v19 + 5) = a3;
        *((_QWORD *)v19 + 6) = 0LL;
        v19[9] = v26;
        v19[14] = 2000;
        *((_QWORD *)v19 + 16) = *(_QWORD *)a2;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qDDDDDDDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            (unsigned __int8)v41[1],
            (unsigned __int8)*v41,
            (unsigned __int8)*(_WORD *)(a2 + 4),
            OutputBuffer,
            (char)v41,
            *v41,
            v41[1],
            *(_WORD *)(a2 + 2),
            HIBYTE(*(_WORD *)(a2 + 2)),
            *(_WORD *)(a2 + 2),
            *(_WORD *)(a2 + 4),
            HIBYTE(*(_WORD *)(a2 + 4)),
            *(_WORD *)(a2 + 4),
            *(_WORD *)(a2 + 6));
          v6 = v42;
        }
        v22->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v19;
        v27 = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v22);
        v28 = v27;
        if ( v27 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v28 = v36.Status;
        }
        else
        {
          v36.Status = v27;
        }
        v29 = v19[1];
        if ( (UsbhLogMask & 8) != 0 )
        {
          v30 = *(_QWORD *)(a1 + 64);
          if ( v30 )
          {
            a5 = 845378419;
            v31 = *(_QWORD *)(v30 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
            *(_DWORD *)v31 = a5;
            *(_QWORD *)(v31 + 16) = v28;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 24) = v29;
          }
        }
        if ( a6 )
          *a6 = v19[1];
        *v6 = *((_WORD *)v19 + 18);
        ExFreePoolWithTag(v19, 0);
        if ( (UsbhLogMask & 8) != 0 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            a5 = 1046705011;
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = a5;
            *(_QWORD *)(v33 + 16) = v28;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 24) = 0LL;
          }
        }
        return (unsigned int)v28;
      }
      else
      {
        ExFreePoolWithTag(v19, 0);
        return 3221225626LL;
      }
    }
    else
    {
      if ( a6 )
        *a6 = -1073737728;
      return 3221225626LL;
    }
  }
}
