/*
 * XREFs of UmfdUnloadFontFile @ 0x1C011A050
 * Callers:
 *     UmfdLoadFontFile @ 0x1C0100E70 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C011A088 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
