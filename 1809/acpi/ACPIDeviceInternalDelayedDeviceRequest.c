/*
 * XREFs of ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001AE0C
 * Callers:
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019D80 (ACPIBuildProcessDevicePhasePsc.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
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
  v4 = &unk_1C006E28A;
  v5 = a2;
  v6 = &unk_1C006E28A;
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
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    23,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
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
