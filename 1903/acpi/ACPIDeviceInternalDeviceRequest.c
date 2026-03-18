/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C000CC54
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIFanControl @ 0x1C0030520 (ACPIFanControl.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000F008 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0015594 (WPP_RECORDER_SF_qdqss.c)
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
  v7 = &unk_1C006FE7D;
  v9 = &unk_1C006FE7D;
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      24,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
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
