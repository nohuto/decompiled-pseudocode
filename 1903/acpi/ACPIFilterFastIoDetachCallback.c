/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x1C002BA80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002BB30 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002BDD0 (ACPIInitDeleteChildDeviceList.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v2; // rbx
  const char *v3; // rcx
  const char *v4; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    DeviceExtension = *(_QWORD *)(DeviceExtension + 8);
    v3 = (const char *)&unk_1C006FE7D;
    v4 = (const char *)&unk_1C006FE7D;
    if ( (DeviceExtension & 0x200000000000LL) != 0 )
    {
      v3 = *(const char **)(v2 + 560);
      if ( (DeviceExtension & 0x400000000000LL) != 0 )
        v4 = *(const char **)(v2 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0xAu,
        (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
        v2,
        v3,
        v4);
      DeviceExtension = *(_QWORD *)(v2 + 8);
    }
    LOBYTE(DeviceExtension) = DeviceExtension & 0x60;
    if ( (_BYTE)DeviceExtension == 64 )
    {
      *(_DWORD *)(v2 + 320) = 4;
      ACPIInitDeleteChildDeviceList(v2);
      LOBYTE(DeviceExtension) = ACPIInitResetDeviceExtension(v2);
    }
  }
  return DeviceExtension;
}
