/*
 * XREFs of ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C394
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C01303AC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FF860 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0132510 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

void __fastcall ExtendRectByWindowMargin(const struct tagWND *a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  struct tagRECT v3; // xmm0
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v5 = 0LL;
  *a3 = v3;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v5) )
  {
    a3->top -= SWORD2(v5);
    a3->left -= (__int16)v5;
    a3->right += SWORD1(v5);
    a3->bottom += SHIWORD(v5);
  }
}
