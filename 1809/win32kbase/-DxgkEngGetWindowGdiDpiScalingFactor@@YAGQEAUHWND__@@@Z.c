/*
 * XREFs of ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00FCF60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C0071460 (UserIsWindowGdiScaled.c)
 *     GreGetScaledLogPixels @ 0x1C00A1D50 (GreGetScaledLogPixels.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(HWND a1)
{
  unsigned __int16 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)UserIsWindowGdiScaled(a1, &v2) )
    return GreGetScaledLogPixels(v2) / 0x60u;
  else
    return 1LL;
}
