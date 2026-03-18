/*
 * XREFs of HasImmersiveAppRight @ 0x1C000D4D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasImmersiveAppRight(__int64 a1)
{
  return (*(_DWORD *)(a1 + 820) & 0x30) == 16;
}
