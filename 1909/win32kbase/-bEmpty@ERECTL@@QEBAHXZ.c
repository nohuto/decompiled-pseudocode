/*
 * XREFs of ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00773A4
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEmpty(ERECTL *this)
{
  return *(_DWORD *)this == *((_DWORD *)this + 2) || *((_DWORD *)this + 1) == *((_DWORD *)this + 3);
}
