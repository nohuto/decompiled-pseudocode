/*
 * XREFs of RaidUnitRestartQueue @ 0x1C001B7A8
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000B100 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
