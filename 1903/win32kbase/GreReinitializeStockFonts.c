/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00A97E0
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112B6C (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReinitializeStockFonts(unsigned int a1, int a2)
{
  __int64 result; // rax

  result = IsFinishStockFontReinitSupported();
  if ( (int)result >= 0 )
    result = FinishStockFontReinit(a1);
  if ( a2 )
    gDrvDpiAdjustedForLoggedOnUser = 1;
  return result;
}
