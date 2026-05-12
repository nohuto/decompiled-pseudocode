/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C006EE80
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001F3EC (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
