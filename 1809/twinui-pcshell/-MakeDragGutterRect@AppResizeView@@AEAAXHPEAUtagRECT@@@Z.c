/*
 * XREFs of ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x1803604A8
 * Callers:
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180360244 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1803616C0 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 * Callees:
 *     <none>
 */

void __fastcall AppResizeView::MakeDragGutterRect(AppResizeView *this, int a2, struct tagRECT *a3)
{
  LONG v4; // r10d
  LONG v5; // eax
  LONG v6; // ecx
  LONG v7; // eax

  *a3 = *(struct tagRECT *)((char *)this + 100);
  v4 = a2 - *((_DWORD *)this + 37) / 2;
  a3->left = v4;
  v5 = *((_DWORD *)this + 25);
  if ( v4 < v5 )
  {
    a3->left = v5;
    v4 = v5;
  }
  v6 = v4 + *((_DWORD *)this + 37);
  a3->right = v6;
  v7 = *((_DWORD *)this + 27);
  if ( v6 > v7 )
  {
    a3->right = v7;
    a3->left = *((_DWORD *)this + 27) - *((_DWORD *)this + 37);
  }
}
