/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1402D7EF0
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1402D7F24 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1402E88A8 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1402E89A0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[27], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
