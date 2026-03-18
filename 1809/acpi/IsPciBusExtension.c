/*
 * XREFs of IsPciBusExtension @ 0x1C00ACF4C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 712));
}
