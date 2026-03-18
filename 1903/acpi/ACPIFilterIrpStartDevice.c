/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C0093BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00564A8 (ACPIQueryGedDeviceInterface.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // rbp
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10
  char v11; // r11
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-50h]

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v7 = (_QWORD *)DeviceExtension;
  if ( DeviceExtension )
  {
    v6 = 0x200000000000LL;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v6 = 0x400000000000LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, *(_BYTE *)(v2 + 1));
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      a2,
      IrpText,
      *(_DWORD *)(a2 + 48),
      v11,
      v9,
      v10);
  }
  if ( (v7[119] & 0x4000000000LL) != 0 )
  {
    v13 = ACPIQueryGedDeviceInterface(v7);
    if ( v13 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v13;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        8u,
        0x18u,
        (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
        v14);
    }
  }
  result = ACPIInitStartDevice(
             BugCheckParameter3,
             v2,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
