/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00516BC
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C004E7C0 (NtRIMOnPnpNotification.c)
 *     NtRIMReadInput @ 0x1C0093460 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C010BF30 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C010BF90 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C010C040 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C010C190 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C010C1D0 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C010C260 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C010C2E0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C010C330 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C010C3A0 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C010C510 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C010C540 (NtRIMUnregisterForInput.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  if ( (int)IsEditionIsUsermodeRIMAccessAllowedSupported() < 0 )
    return 0LL;
  else
    return EditionIsUsermodeRIMAccessAllowed();
}
