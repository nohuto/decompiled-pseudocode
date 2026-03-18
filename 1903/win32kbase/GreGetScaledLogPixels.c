/*
 * XREFs of GreGetScaledLogPixels @ 0x1C00B2BA0
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C01304E0 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall GreGetScaledLogPixels(unsigned __int16 a1)
{
  if ( gbUseActualGDIScale )
    return a1;
  else
    return 96 * (((unsigned int)a1 + 95) / 0x60);
}
