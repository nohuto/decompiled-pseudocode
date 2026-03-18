/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14003D700
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14003D5D0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140100860 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140100A20 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
