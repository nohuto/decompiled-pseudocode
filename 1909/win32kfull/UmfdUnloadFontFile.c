/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00FD050
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00F9F20 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00FD088 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
