/*
 * XREFs of ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AA190
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00304E0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005A76C (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // edi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64)DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (DeviceExtension[238] & 0x40000) != 0 && MinorFunction == 5 || (DeviceExtension[2] & 0x204000) == 0x200000LL )
  {
    v6 = -1073741808;
  }
  else
  {
    if ( DeviceExtension[80] == 3 && (DeviceExtension[155] & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 0);
    ACPIThermalReleaseCoolingInterfaces(v4);
    v6 = 0;
    *(_DWORD *)(v4 + 324) = *(_DWORD *)(v4 + 320);
    *(_DWORD *)(v4 + 320) = 1;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x2Cu,
    (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
    (char)a2,
    IrpText,
    v6,
    v4,
    v9,
    v10);
  return v6;
}
