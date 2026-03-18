/*
 * XREFs of ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C01E9868
 * Callers:
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C01E7DA8 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C025823C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall EnsureServerVmBusInterface(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  PIRP v9; // rax
  __int64 v10; // rcx
  IRP *v11; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v13; // rcx
  NTSTATUS Status; // edi
  PFILE_OBJECT v15; // rcx
  struct DXGGLOBAL *v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+38h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 576));
  v2 = 0;
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    ((void (__fastcall *)(__int64))qword_1C008FBC0)(qword_1C008FBB8);
    ++g_VgpuVmBusInterfaceRefCount;
    v4 = DXGGLOBAL::GetGlobal(v3);
    *((_QWORD *)v4 + 73) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 576, 0LL);
    goto LABEL_17;
  }
  memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RootVMBus\\kmcl_interface");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  v7 = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v11 = v9;
    if ( v9 )
    {
      CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MinorFunction = 8;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_PRIVATE_SERVER_INTERFACE_TYPE;
      CurrentStackLocation[-1].Parameters.Create.Options = 66328;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      v11->IoStatus.Status = -1073741637;
      Status = IofCallDriver(DeviceObject, v11);
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
      v8 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v8 + 24) = Status;
      *(_QWORD *)(v8 + 32) = 10629LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v8 + 24) = -1073741670LL;
      *(_QWORD *)(v8 + 32) = 10601LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
  }
  WdLogEvent5_WdError(v8);
LABEL_14:
  v15 = FileObject;
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  v16 = DXGGLOBAL::GetGlobal((__int64)v15);
  *((_QWORD *)v16 + 73) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v16 + 576, 0LL);
  v2 = v7;
LABEL_17:
  KeLeaveCriticalRegion();
  return v2;
}
