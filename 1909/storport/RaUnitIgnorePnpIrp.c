/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C006FF8C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001FDCC (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
