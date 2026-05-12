/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C001B7BC
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00740F8 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0014A5C (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0021A54 (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 160) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
