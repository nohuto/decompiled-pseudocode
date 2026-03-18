/*
 * XREFs of FinishStockFontReinit @ 0x1C00C12C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C00BFD5C (GreSetLFONTOwner.c)
 *     FinishStockFontInit @ 0x1C00C1820 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C1CEC (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1C036D8B4 (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(INT c, __int64 a2, __int64 a3)
{
  void *inited; // rax
  __int64 result; // rax

  GreSetLFONTOwner((__int64)gahStockObjects[17], 0x80000002, a3);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0LL;
  GreSetLFONTOwner((__int64)gahStockObjects96[17], 0x80000002, (__int64)gahStockObjects);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  result = FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
  return result;
}
