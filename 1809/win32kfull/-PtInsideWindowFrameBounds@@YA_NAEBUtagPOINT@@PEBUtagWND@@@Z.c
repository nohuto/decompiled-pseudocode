/*
 * XREFs of ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C02245B8
 * Callers:
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0227278 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01D279C (PhysicalToLogicalPointForWindow.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C0224580 (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

bool __fastcall PtInsideWindowFrameBounds(const struct tagPOINT *a1, const struct tagWND *a2)
{
  const struct tagWND *v2; // r11
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v5; // [rsp+28h] [rbp-20h] BYREF

  PhysicalToLogicalPointForWindow((__int64)*a1, (__int64)a2, &v4);
  v5 = *GetWindowFrameBounds(&v5, v2);
  return PtInRect(&v5, v4);
}
