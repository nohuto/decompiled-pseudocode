/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000EA78
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000F008 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0015594 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceInternalDelayedDeviceRequest(_QWORD *a1, unsigned int a2)
{
  char v3; // r10
  void *v4; // rcx
  unsigned int v5; // edi
  void *v6; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = &unk_1C006FE7D;
  v5 = a2;
  v6 = &unk_1C006FE7D;
  if ( a1 )
  {
    v7 = a1[1];
    a2 = 0;
    v3 = (char)a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (void *)a1[70];
      a2 = 0;
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)a1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      23,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      0,
      v5 - 1,
      v3,
      (__int64)v4,
      (__int64)v6);
  result = ACPIDeviceInitializePowerRequest(a1, v5, 0LL, 0LL, 0, 0, 9);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
