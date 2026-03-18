/*
 * XREFs of GreGetScaledLogPixels @ 0x1C00A1D50
 * Callers:
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00FCF60 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
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
