/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14003D9C0
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14003D890 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400B4EB0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1400B7920 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
