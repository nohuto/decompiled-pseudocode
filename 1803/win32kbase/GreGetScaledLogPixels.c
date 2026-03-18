/*
 * XREFs of GreGetScaledLogPixels @ 0x1C0072EA0
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00C8FB0 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
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
