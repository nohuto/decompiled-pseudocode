/*
 * XREFs of ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240FE8
 * Callers:
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 * Callees:
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     DrawThumb2 @ 0x1C00EAF30 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00EB0B8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C00EB194 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall xxxDrawThumb(struct tagWND *a1, struct tagSBCALC *a2, unsigned int a3)
{
  HDC DCEx; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  char WndSBDisableFlags; // si
  HBRUSH ColorObjects; // rbx
  __int64 v10; // rdi
  int v11[16]; // [rsp+30h] [rbp-78h] BYREF

  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff((__int64)a1, v11, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v6, v7);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (unsigned __int64)DCEx);
  v10 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, v11, DCEx, ColorObjects, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v10);
  _ReleaseDC(DCEx);
}
