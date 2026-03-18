/*
 * XREFs of PipFreeDeviceObjectList @ 0x1408751BC
 * Callers:
 *     PipGrowDeviceObjectList @ 0x1408751E0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x14073345C (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(_DWORD *P)
{
  PiClearDeviceObjectList(P);
  ExFreePoolWithTag(P, 0);
}
