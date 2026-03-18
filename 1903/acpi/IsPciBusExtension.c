/*
 * XREFs of IsPciBusExtension @ 0x1C00B069C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002B860 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C009D2C0 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 712));
}
