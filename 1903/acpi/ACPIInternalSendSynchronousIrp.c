/*
 * XREFs of ACPIInternalSendSynchronousIrp @ 0x1C0096C64
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002CD50 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C002F418 (ACPIWakeInitializePmeRouting.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00564A8 (ACPIQueryGedDeviceInterface.c)
 *     AcpiQueryPciBusInterface @ 0x1C0093E0C (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0093FF4 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0095290 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0096920 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIMatchHardwareId @ 0x1C009FCFC (ACPIMatchHardwareId.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A1570 (ACPIBusIrpDeviceUsageNotification.c)
 *     PcisuppInitializePciRouting @ 0x1C00A26A4 (PcisuppInitializePciRouting.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall ACPIInternalSendSynchronousIrp(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int64 *a3)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v7; // rax
  IRP *v8; // rdx
  __int64 v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h]
  struct _IO_STATUS_BLOCK v14; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  v14.Pointer = 0LL;
  v14.Information = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &v14);
  v8 = v7;
  if ( v7 )
  {
    v7->IoStatus.Information = 0LL;
    v7->IoStatus.Status = -1073741637;
    v9 = (__int64)&v7->Tail.Overlay.CurrentStackLocation[-1];
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 64);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Control = 0;
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v14.Status;
      }
      if ( Status >= 0 && a3 )
        *a3 = v14.Information;
    }
    else
    {
      Status = -1073741811;
    }
  }
  else
  {
    Status = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(IoStatusBlock) = Status;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
      DeviceObject,
      IoStatusBlock);
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
