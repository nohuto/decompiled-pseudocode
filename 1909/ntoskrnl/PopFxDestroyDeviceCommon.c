/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x14019D06C
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x14019CF54 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x14030471C (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14030482C (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[28], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
