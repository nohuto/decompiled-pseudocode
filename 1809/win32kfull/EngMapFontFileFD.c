/*
 * XREFs of EngMapFontFileFD @ 0x1C026E780
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0092A44 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal(iFile, ppjBuf, pcjBuf, 1);
}
