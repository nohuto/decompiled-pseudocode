/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x14019C8EC
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x14019C7D4 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x140304C6C (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x140304D7C (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[28], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
