/*
 * XREFs of ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C028B374
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C028B968 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 *     NtGdiGetFontFileData @ 0x1C029D8B0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vClosePrintKView@@YAXXZ @ 0x1C028BDEC (-vClosePrintKView@@YAXXZ.c)
 */

int __fastcall MapFontFileInKernel(PVOID Section, PVOID *MappedBase)
{
  int result; // eax
  ULONG_PTR ViewSize; // [rsp+38h] [rbp+10h] BYREF

  *MappedBase = 0LL;
  ViewSize = 0LL;
  result = MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  }
  return result;
}
