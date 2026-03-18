/*
 * XREFs of ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AD5D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C4BC (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // si
  _DWORD *DeviceExtension; // rax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = (__int64)DeviceExtension;
  if ( (DeviceExtension[2] & 0x204000) != 0x200000LL )
  {
    if ( DeviceExtension[80] == 1 )
    {
      v6 = DeviceExtension[81];
      DeviceExtension[80] = v6;
      if ( v6 == 3 && (DeviceExtension[155] & 0x300) != 0 )
        EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 1);
    }
    if ( !*(_QWORD *)(v5 + 608) )
      ACPIThermalAcquireCoolingInterfaces(v5);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      (char)a2,
      IrpText,
      0,
      v5,
      v9,
      v10);
  }
  return 0LL;
}
