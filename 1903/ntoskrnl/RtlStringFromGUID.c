/*
 * XREFs of RtlStringFromGUID @ 0x1406A11D0
 * Callers:
 *     BiCreateObject @ 0x14092E828 (BiCreateObject.c)
 *     SepSecureBootSetRegistryKey @ 0x140A09508 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A0F6E8 (VhdInitialize.c)
 *     PipHardwareConfigInit @ 0x140A1C298 (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140A22754 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A3E93C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
