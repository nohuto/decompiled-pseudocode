/*
 * XREFs of NdisIMCancelInitializeDeviceInstance @ 0x1C007FA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C0037C5C (WPP_RECORDER_SF_qZL.c)
 *     ndisIMCheckDeviceInstance @ 0x1C0080108 (ndisIMCheckDeviceInstance.c)
 */

NDIS_STATUS __stdcall NdisIMCancelInitializeDeviceInstance(NDIS_HANDLE DriverHandle, PNDIS_STRING DeviceInstance)
{
  char v3; // si
  char v4; // al
  int v5; // edx
  NDIS_STATUS v6; // ebx
  char v8[4]; // [rsp+38h] [rbp-10h]

  v3 = (char)DriverHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)DeviceInstance,
      1u,
      0x36u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)DriverHandle,
      &DeviceInstance->Length);
  v4 = 1 - ndisIMCheckDeviceInstance(v3, (__int64)DeviceInstance);
  v6 = v4 != 0 ? 0xC0000001 : 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4 != 0 ? 0xC0000001 : 0;
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1u,
      0x37u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      v3,
      &DeviceInstance->Length,
      *(_DWORD *)v8);
  }
  return v6;
}
