/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14004F570
 * Callers:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14004F450 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReinitializeResourceLite @ 0x14010A190 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A340 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
