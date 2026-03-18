/*
 * XREFs of ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B47A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 */

__int64 __fastcall ACPIRootIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  char *IrpText; // rax
  const char *v10; // r8
  const char *v11; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x200000) == 0 )
  {
    if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
      *(_DWORD *)(DeviceExtension + 320) = *(_DWORD *)(DeviceExtension + 324);
    if ( !*(_QWORD *)(DeviceExtension + 608) )
      ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  }
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  v7 = 0x200000000000LL;
  v8 = v6;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xAu,
      (__int64)&WPP_07c7b752520234d9370002fcc10364f5_Traceguids,
      (char)a2,
      IrpText,
      v8,
      v4,
      v10,
      v11);
  }
  return v8;
}
