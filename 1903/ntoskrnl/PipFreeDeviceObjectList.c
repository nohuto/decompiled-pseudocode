/*
 * XREFs of PipFreeDeviceObjectList @ 0x140875ABC
 * Callers:
 *     PipGrowDeviceObjectList @ 0x140875AE0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x1407311FC (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(_DWORD *P)
{
  PiClearDeviceObjectList(P);
  ExFreePoolWithTag(P, 0);
}
