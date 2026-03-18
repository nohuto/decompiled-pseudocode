/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C000DA34
 * Callers:
 *     ACPIFanControl @ 0x1C000D670 (ACPIFanControl.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  char v6; // r11
  void *v7; // rcx
  void *v9; // r10
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = &unk_1C006E28A;
  v9 = &unk_1C006E28A;
  v11 = a2;
  if ( a1 )
  {
    v12 = a1[1];
    a2 = 0;
    v6 = (char)a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)a1[70];
      a2 = 0;
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = (void *)a1[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    24,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a4,
    v11 - 1,
    v6,
    (__int64)v7,
    (__int64)v9);
  result = ACPIDeviceInitializePowerRequest(a1, v11, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
