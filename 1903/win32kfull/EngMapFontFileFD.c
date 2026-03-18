/*
 * XREFs of EngMapFontFileFD @ 0x1C0287050
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C007F6D4 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal(iFile, ppjBuf, pcjBuf, 1);
}
