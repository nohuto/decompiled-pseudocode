/*
 * XREFs of ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0241608
 * Callers:
 *     xxxSetScrollBar @ 0x1C002778C (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 * Callees:
 *     DrawThumb2 @ 0x1C000BDD0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C000BF58 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C000C034 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C00AA7A4 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  HDC DCEx; // rbp
  char WndSBDisableFlags; // si
  HBRUSH ColorObjects; // rbx
  __int64 v8; // rdi
  int v9[16]; // [rsp+30h] [rbp-78h] BYREF

  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff((__int64)a1, v9, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (HWND)DCEx);
  v8 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, v9, DCEx, ColorObjects, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v8);
  _ReleaseDC(DCEx);
}
