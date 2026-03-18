/*
 * XREFs of EngMapFontFileFD @ 0x1C025AFC0
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, ppjBuf, pcjBuf, 1);
}
