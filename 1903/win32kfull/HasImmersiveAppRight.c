/*
 * XREFs of HasImmersiveAppRight @ 0x1C008F40C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasImmersiveAppRight(__int64 a1)
{
  return (*(_DWORD *)(a1 + 812) & 0x30) == 16;
}
