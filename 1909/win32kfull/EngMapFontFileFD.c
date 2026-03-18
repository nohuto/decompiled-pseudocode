/*
 * XREFs of EngMapFontFileFD @ 0x1C0286990
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C011F680 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal(iFile, ppjBuf, pcjBuf, 1);
}
