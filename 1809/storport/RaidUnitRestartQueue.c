/*
 * XREFs of RaidUnitRestartQueue @ 0x1C001D700
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, char a2)
{
  RaidRestartIoQueue(a1, a2);
}
