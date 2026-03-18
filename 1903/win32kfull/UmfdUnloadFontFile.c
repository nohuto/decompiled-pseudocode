/*
 * XREFs of UmfdUnloadFontFile @ 0x1C0122050
 * Callers:
 *     UmfdLoadFontFile @ 0x1C011F240 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C0122088 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
