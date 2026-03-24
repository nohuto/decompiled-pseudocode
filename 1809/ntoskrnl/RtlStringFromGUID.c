/*
 * XREFs of RtlStringFromGUID @ 0x14058B220
 * Callers:
 *     PipHardwareConfigInit @ 0x1409C63FC (PipHardwareConfigInit.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     SepSecureBootSetRegistryKey @ 0x1409DC258 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1409DF1D0 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x1409F8DD8 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
