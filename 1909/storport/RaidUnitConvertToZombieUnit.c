/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C0019CCC
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0013CAC (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C0019D04 (RaidAdapterInsertZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
