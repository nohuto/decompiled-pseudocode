/*
 * XREFs of EngMapFontFile @ 0x1C0287030
 * Callers:
 *     <none>
 * Callees:
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C0286060 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 */

BOOL __stdcall EngMapFontFile(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileInternal(iFile, ppjBuf, pcjBuf);
}
