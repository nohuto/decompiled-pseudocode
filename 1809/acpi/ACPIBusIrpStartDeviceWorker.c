/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C009FA60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C00AC2D4 (EnableDisableIPMIRegions.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00AD168 (ACPIPepInitializePlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  __int64 v4; // rdi
  int Status; // esi
  unsigned __int8 MinorFunction; // r15
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *IrpText; // rax
  const char *v12; // r8
  const char *v13; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = DeviceExtension;
  Status = v3->IoStatus.Status;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 712)) || v7 )
      EnableDisableRegions(*(__int64 **)(v4 + 712), 1, v8);
    if ( (*(_DWORD *)(v4 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v9) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v4 + 712), v9);
    }
    if ( (*(_QWORD *)(v4 + 952) & 0x10000000000LL) != 0 )
      ACPIPepInitializePlatformNotificationSupport((PVOID)v4);
  }
  if ( (*(_QWORD *)(v4 + 8) & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v4, 0, 163);
  v3->IoStatus.Information = 0LL;
  v3->IoStatus.Status = Status;
  IofCompleteRequest(v3, 0);
  v10 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v10 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v10, MinorFunction);
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x3Du,
           (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
           (char)v3,
           IrpText,
           Status,
           v4,
           v12,
           v13);
}
