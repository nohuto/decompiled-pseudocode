/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00BE1C0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00BE2A0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00BE1F0 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal();
  EngFreeMem(pv);
  return v2;
}
