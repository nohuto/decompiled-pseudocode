/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1C003405C
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C0034774 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C0034898 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterSurpriseRemove);
}
