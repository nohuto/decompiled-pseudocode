/*
 * XREFs of RtlStringFromGUID @ 0x14069DD10
 * Callers:
 *     BiCreateObject @ 0x14092E29C (BiCreateObject.c)
 *     SepSecureBootSetRegistryKey @ 0x140A09A34 (SepSecureBootSetRegistryKey.c)
 *     VhdInitialize @ 0x140A0FE80 (VhdInitialize.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140A22834 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140A3E70C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
