/*
 * XREFs of ACPIFilterIrpDeviceUsageNotification @ 0x1C009E980
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotification(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // rbx
  _IO_STACK_LOCATION *v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  char *IrpText; // rax
  const char *v11; // r8
  const char *v12; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].Context = 0LL;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpDeviceUsageNotificationCompletion;
  v6[-1].Control = -32;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 680));
  v7 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 728), a2);
  v8 = 0x200000000000LL;
  v9 = v7;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v8 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v8, 0x16u);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xBu,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    (char)a2,
    IrpText,
    v9,
    v5,
    v11,
    v12);
  return v9;
}
