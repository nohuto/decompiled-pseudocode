/*
 * XREFs of ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C01E961C
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C01E7AA4 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C025823C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall EnsureClientVmBusInterface(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  PIRP v10; // rax
  __int64 v11; // rcx
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // edi
  struct DXGGLOBAL *v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 576));
  v2 = 0;
  if ( !g_VgpuVmBusInterfaceRefCount )
  {
    memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
    RtlInitUnicodeString(&DestinationString, L"\\Device\\VMBus\\kmcl_interface");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
    v7 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v10 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      v12 = v10;
      if ( v10 )
      {
        CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MinorFunction = 8;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_CLIENT_INTERFACE_TYPE;
        CurrentStackLocation[-1].Parameters.Create.Options = 65896;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        v12->IoStatus.Status = -1073741637;
        Status = IofCallDriver(DeviceObject, v12);
        if ( Status == 259 )
        {
          Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( !Status )
            Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          g_VgpuVmBusInterfaceRefCount = 1;
          goto LABEL_14;
        }
        v8 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v8 + 24) = Status;
        *(_QWORD *)(v8 + 32) = 10725LL;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v8 + 24) = -1073741670LL;
        *(_QWORD *)(v8 + 32) = 10697LL;
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v7;
    }
    WdLogEvent5_WdError(v8);
LABEL_14:
    v15 = DXGGLOBAL::GetGlobal(v9);
    *((_QWORD *)v15 + 73) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v15 + 576, 0LL);
    v2 = v7;
    goto LABEL_15;
  }
  ((void (__fastcall *)(__int64))qword_1C008FBC0)(qword_1C008FBB8);
  ++g_VgpuVmBusInterfaceRefCount;
  v4 = DXGGLOBAL::GetGlobal(v3);
  *((_QWORD *)v4 + 73) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v4 + 576, 0LL);
LABEL_15:
  KeLeaveCriticalRegion();
  return v2;
}
