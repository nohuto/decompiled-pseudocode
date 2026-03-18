/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C006C8A0
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C006A200 (NtRIMOnPnpNotification.c)
 *     NtRIMReadInput @ 0x1C006DB80 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C01361E0 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C0136240 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C01362F0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C0136710 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C0136750 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C01367E0 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0136860 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C01368B0 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C0136920 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C0136E30 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C0136E60 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  unsigned int IsUsermodeRIMAccessAllowed; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      154,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  IsUsermodeRIMAccessAllowed = 0;
  if ( (int)IsEditionIsUsermodeRIMAccessAllowedSupported() >= 0 )
    IsUsermodeRIMAccessAllowed = EditionIsUsermodeRIMAccessAllowed();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      155,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return IsUsermodeRIMAccessAllowed;
}
