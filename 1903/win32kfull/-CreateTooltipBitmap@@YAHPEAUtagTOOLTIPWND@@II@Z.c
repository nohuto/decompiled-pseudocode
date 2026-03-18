/*
 * XREFs of ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023F52C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C012FA60 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C012FBF8 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall CreateTooltipBitmap(struct tagTOOLTIPWND *a1, unsigned int a2, unsigned int a3)
{
  HDC TooltipDC; // rbx
  __int64 v7; // rcx

  if ( !*((_QWORD *)a1 + 2) )
    return 0LL;
  DestroyTooltipBitmap(a1);
  TooltipDC = GetTooltipDC(a1, 0LL);
  *((_QWORD *)a1 + 3) = GreCreateCompatibleBitmapInternal(TooltipDC, a2, a3, 0, 0LL, 0LL);
  _ReleaseDC(TooltipDC);
  v7 = *((_QWORD *)a1 + 3);
  if ( !v7 )
    return 0LL;
  GreSetBitmapOwner(v7, 0LL);
  GreSelectBitmap(*((_QWORD *)a1 + 2));
  return 1LL;
}
