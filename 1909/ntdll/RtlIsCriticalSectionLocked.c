/*
 * XREFs of RtlIsCriticalSectionLocked @ 0x1800E6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLocked(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 1) == 0;
}
