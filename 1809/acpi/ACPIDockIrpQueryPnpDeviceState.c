/*
 * XREFs of ACPIDockIrpQueryPnpDeviceState @ 0x1C00A8880
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002890 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIDockIrpQueryPnpDeviceState(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  unsigned __int8 MinorFunction; // si
  __int64 v5; // rcx
  char *IrpText; // rax
  const char *v7; // r8
  const char *v8; // r10
  char v9; // r11

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Information |= 2uLL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v5 = 0x200000000000LL;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v5 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v5, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x18u,
    (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
    (char)a2,
    IrpText,
    0,
    v9,
    v7,
    v8);
  return 0LL;
}
