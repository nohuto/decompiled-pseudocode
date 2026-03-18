/*
 * XREFs of ACPIFilterIrpQueryDeviceRelations @ 0x1C008D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004B530 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A9CDC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r12
  __int64 DeviceExtension; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned __int64 Information; // rax
  unsigned int Length; // ecx
  unsigned int v9; // ecx
  NTSTATUS Status; // edi
  const char *v11; // r15
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  NTSTATUS RemovalRelations; // eax
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  char *v22; // rax
  const char *v23; // r8
  char v24; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  else
    Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v26 = Information;
  if ( Length )
  {
    v9 = Length - 1;
    if ( v9 )
    {
      if ( v9 != 2 )
      {
        Status = -1073741637;
        goto LABEL_7;
      }
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&v26);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, a2, &v26);
    }
  }
  else
  {
    v4 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, a2, &v26);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
LABEL_7:
  v11 = byte_1C006E28A;
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, CurrentStackLocation->MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xDu,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v14,
    v15,
    v13);
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = v26;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_13;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v16 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
  *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
  v16[-1].FileObject = v16->FileObject;
  v16[-1].Control = 0;
  v17 = a2->Tail.Overlay.CurrentStackLocation;
  v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v17[-1].Context = &Event;
  v17[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v4 )
  {
    v20 = (_DWORD *)a2->IoStatus.Information;
    if ( a2->Flags != 393216 )
    {
      ACPIFilterRemoveNonPresentDevices(DeviceExtension, v20);
      v20 = (_DWORD *)a2->IoStatus.Information;
    }
    ACPIDetectFilterDevices(a1, (__int64)v20);
    v21 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v21 & 0x200000000000LL) != 0 )
      v11 = *(const char **)(DeviceExtension + 560);
    v22 = ACPIDebugGetIrpText(v21, CurrentStackLocation->MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xEu,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      (char)a2,
      v22,
      v24,
      DeviceExtension,
      v11,
      v23);
  }
LABEL_13:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
