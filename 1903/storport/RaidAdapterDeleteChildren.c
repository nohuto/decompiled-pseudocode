/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C00334C4
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C0034774 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C0034898 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
