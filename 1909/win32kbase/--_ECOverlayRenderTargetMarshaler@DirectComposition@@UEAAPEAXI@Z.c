/*
 * XREFs of ??_ECOverlayRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0003F90
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00C1830 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::COverlayRenderTargetMarshaler *__fastcall DirectComposition::COverlayRenderTargetMarshaler::`vector deleting destructor'(
        DirectComposition::COverlayRenderTargetMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
