/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C00AD9E0
 * Callers:
 *     ACPIEcStopDevice @ 0x1C0053A40 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00311A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIFanStopDevice @ 0x1C0055364 (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C4BC (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x1C005FE38 (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009D2C0 (IsNsobjPciBus.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B06B8 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 620) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 320) = *(_DWORD *)(DeviceExtension + 324);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
  v7 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
  v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 712)) || v6 )
    EnableDisableRegions(*(__int64 **)(DeviceExtension + 712), 0, v7);
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x1000) != 0 )
  {
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 712), 0LL);
    v9 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v9 & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 952);
    if ( (v10 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v10 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 320) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0);
  v11 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Eu,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      (char)a2,
      IrpText,
      0,
      DeviceExtension,
      v13,
      v14);
  }
  return 0LL;
}
