/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1402D7C00
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1402D7C34 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1402E85B8 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1402E86B0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P)
{
  ExFreePoolWithTag(P[27], 0x4D584650u);
  ExFreePoolWithTag(P, 0x4D584650u);
}
