/*
 * XREFs of ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x1803F8BC0
 * Callers:
 *     ?SetDragStartPosition@CDragVisual@@UEAAXUtagPOINT@@@Z @ 0x1803F8150 (-SetDragStartPosition@CDragVisual@@UEAAXUtagPOINT@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1803FA35C (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

void __fastcall CDragVisual::_CheckDragStartBounds(CDragVisual *this)
{
  __int128 v1; // xmm0
  HWND v3; // rcx
  LONG v4; // r8d
  LONG x; // edx
  LONG v6; // eax
  struct tagPOINT Points[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_OWORD *)this + 15);
  v3 = (HWND)*((_QWORD *)this + 19);
  *(_OWORD *)&Points[0].x = v1;
  MapWindowPoints(v3, 0LL, Points, 2u);
  v4 = *((_DWORD *)this + 44);
  x = Points[1].x;
  v6 = Points[1].x;
  if ( v4 < Points[1].x )
    v6 = *((_DWORD *)this + 44);
  if ( v6 <= Points[0].x )
  {
    x = Points[0].x;
  }
  else if ( v4 < Points[1].x )
  {
    x = *((_DWORD *)this + 44);
  }
  *((_DWORD *)this + 44) = x;
}
