/*
 * XREFs of ACPIFilterIrpStopDeviceCompletion @ 0x1C0053A60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStopDeviceCompletion(ULONG_PTR a1, __int64 a2)
{
  int v2; // esi
  __int64 DeviceExtension; // rax
  char v5; // r8
  const char *v6; // rcx
  __int64 v7; // rbx
  const char *v8; // rdx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a2 + 48);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = (const char *)&unk_1C006E28A;
  v7 = DeviceExtension;
  v8 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v5 = DeviceExtension;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v7 + 568);
    }
  }
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Du,
    (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
    a2,
    off_1C007D030[0],
    v2,
    v5,
    v6,
    v8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(v7 + 320) = 0;
    ACPIInitStopDevice(v7, 0LL);
  }
  ACPIInternalDecrementIrpReferenceCount(v7);
  return 0LL;
}
