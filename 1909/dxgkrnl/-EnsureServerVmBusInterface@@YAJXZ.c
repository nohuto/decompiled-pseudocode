/*
 * XREFs of ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C02197FC
 * Callers:
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0217B88 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C028E8EC (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall EnsureServerVmBusInterface(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  PIRP v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  IRP *v17; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v19; // rcx
  NTSTATUS Status; // edi
  __int64 v21; // r8
  PFILE_OBJECT v22; // rcx
  struct DXGGLOBAL *v23; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+38h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 552));
  v3 = 0;
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    ((void (__fastcall *)(__int64))qword_1C00A3BE0)(qword_1C00A3BD8);
    ++g_VgpuVmBusInterfaceRefCount;
    v6 = DXGGLOBAL::GetGlobal(v5, v4);
    *((_QWORD *)v6 + 70) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 552, 0LL);
    goto LABEL_17;
  }
  memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RootVMBus\\kmcl_interface");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  v11 = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v14 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v17 = v14;
    if ( v14 )
    {
      CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MinorFunction = 8;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_PRIVATE_SERVER_INTERFACE_TYPE;
      CurrentStackLocation[-1].Parameters.Create.Options = 66328;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      v17->IoStatus.Status = -1073741637;
      Status = IofCallDriver(DeviceObject, v17);
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
      v12 = WdLogNewEntry5_WdError(v19, v13, v21);
      *(_QWORD *)(v12 + 24) = Status;
      *(_QWORD *)(v12 + 32) = 10653LL;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v15, 0LL, v16);
      *(_QWORD *)(v12 + 24) = -1073741670LL;
      *(_QWORD *)(v12 + 32) = 10625LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
  }
  WdLogEvent5_WdError(v12);
LABEL_14:
  v22 = FileObject;
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  v23 = DXGGLOBAL::GetGlobal((__int64)v22, v13);
  *((_QWORD *)v23 + 70) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v23 + 552, 0LL);
  v3 = v11;
LABEL_17:
  KeLeaveCriticalRegion();
  return v3;
}
