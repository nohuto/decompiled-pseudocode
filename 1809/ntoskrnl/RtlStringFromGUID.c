/*
 * XREFs of RtlStringFromGUID @ 0x14058C220
 * Callers:
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     SepSecureBootSetRegistryKey @ 0x1409DD258 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1409E01D0 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x1409F9DD8 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
