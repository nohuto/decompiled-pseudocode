/*
 * XREFs of ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C006969C
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00FC2F0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEmpty(ERECTL *this)
{
  return *(_DWORD *)this == *((_DWORD *)this + 2) || *((_DWORD *)this + 1) == *((_DWORD *)this + 3);
}
