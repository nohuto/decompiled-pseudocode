/*
 * XREFs of ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C0053970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  return ACPIFilterIrpRemoveDevice(a1, a2);
}
