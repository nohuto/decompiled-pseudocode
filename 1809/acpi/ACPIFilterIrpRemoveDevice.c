/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C002DAE0
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C0053970 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002E01C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     AcpiDeletePciBusInterface @ 0x1C009F700 (AcpiDeletePciBusInterface.c)
 *     IsPciBusExtension @ 0x1C00ACF4C (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r15
  __int64 DeviceExtension; // rbx
  int v5; // eax
  bool v6; // bp
  char v7; // r12
  volatile signed __int64 *v8; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Status; // edi
  __int64 v12; // rax
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // r15
  bool v21; // r13
  __int64 v22; // r8
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v24; // [rsp+B8h] [rbp+10h]

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v24 = MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  v6 = 0;
  if ( !v5 )
    v6 = *(_DWORD *)(DeviceExtension + 324) == 0;
  v7 = 0;
  if ( v5 == 5 || *(char *)(DeviceExtension + 8) < 0 )
  {
    v7 = 1;
    v8 = (volatile signed __int64 *)(DeviceExtension + 8);
  }
  else
  {
    v8 = (volatile signed __int64 *)(DeviceExtension + 8);
    if ( !v6 )
    {
      v20 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
      v21 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v20 )
      {
        LOBYTE(v22) = v21;
        EnableDisableRegions(*(_QWORD *)(DeviceExtension + 712), 0LL, v22);
        v8 = (volatile signed __int64 *)(DeviceExtension + 8);
      }
      MinorFunction = v24;
    }
  }
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 320) != 5 )
    _InterlockedOr64(v8, 0x800uLL);
  *(_DWORD *)(DeviceExtension + 320) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v10 = a2->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v10[-1].Context = &Event;
  v10[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v12 = *(_QWORD *)(DeviceExtension + 8);
  v13 = (const char *)&unk_1C006E28A;
  v14 = (const char *)&unk_1C006E28A;
  if ( (v12 & 0x200000000000LL) != 0 )
  {
    v13 = *(const char **)(DeviceExtension + 560);
    if ( (v12 & 0x400000000000LL) != 0 )
      v14 = *(const char **)(DeviceExtension + 568);
  }
  v15 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v15 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xCu,
    0x16u,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    (char)a2,
    ACPIDispatchPnpTableNames[v15],
    Status,
    DeviceExtension,
    v13,
    v14);
  if ( Status >= 0 )
  {
    if ( !v7 && !v6 )
    {
      LOBYTE(v16) = 1;
      ACPIInitStopDevice(DeviceExtension, v16);
    }
    v17 = *(void **)(DeviceExtension + 112);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v18 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v18;
}
