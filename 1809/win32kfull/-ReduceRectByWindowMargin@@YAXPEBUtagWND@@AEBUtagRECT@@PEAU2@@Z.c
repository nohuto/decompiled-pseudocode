/*
 * XREFs of ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224620
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01BF4D4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C0224580 (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

void __fastcall ReduceRectByWindowMargin(const struct tagWND *a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  __int16 v4; // [rsp+38h] [rbp+10h] BYREF
  __int16 v5; // [rsp+3Ah] [rbp+12h]
  __int16 v6; // [rsp+3Ch] [rbp+14h]
  __int16 v7; // [rsp+3Eh] [rbp+16h]

  *a3 = *a2;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v4) )
  {
    a3->top += v6;
    a3->left += v4;
    a3->right -= v5;
    a3->bottom -= v7;
  }
}
