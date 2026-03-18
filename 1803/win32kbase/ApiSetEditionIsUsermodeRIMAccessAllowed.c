/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C00DF2A0 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C00DF300 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00DF3B0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C00DF540 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C00DF580 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C00DF610 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C00DF690 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C00DF6E0 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnPnpNotification @ 0x1C00DF750 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C00DF8D0 (NtRIMOnTimerNotification.c)
 *     NtRIMReadInput @ 0x1C00DFA60 (NtRIMReadInput.c)
 *     NtRIMSetTestModeStatus @ 0x1C00DFB10 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C00DFB40 (NtRIMUnregisterForInput.c)
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
