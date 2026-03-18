/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0058940
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C00562A0 (NtRIMOnPnpNotification.c)
 *     NtRIMReadInput @ 0x1C005A190 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C0133B70 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C0133BD0 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0133C80 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C01340A0 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C01340E0 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C0134170 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C01341F0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C0134240 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C01342B0 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C01347C0 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C01347F0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
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
