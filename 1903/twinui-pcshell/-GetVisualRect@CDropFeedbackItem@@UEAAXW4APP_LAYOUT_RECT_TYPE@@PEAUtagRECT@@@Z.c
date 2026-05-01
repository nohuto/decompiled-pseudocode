/*
 * XREFs of ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1803DCFB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1803D6190 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1803D80B0 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1803DE350 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 */

void __fastcall CDropFeedbackItem::GetVisualRect(__int64 a1, int a2, struct tagRECT *a3)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  float v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int v10[4]; // [rsp+28h] [rbp-38h] BYREF
  RECT Points; // [rsp+38h] [rbp-28h] BYREF
  RECT v12; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&Points.left = 0LL;
  *(_QWORD *)&Points.right = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 1LL, &Points);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, (LPPOINT)&Points, 2u);
  if ( a2 )
    *a3 = *(struct tagRECT *)MapRelativeRect(v10, (int *)(a1 + 108), (_OWORD *)(a1 + 92), &Points.left);
  else
    CopyRect(a3, &Points);
  *(_QWORD *)&v12.left = 0LL;
  *(_QWORD *)&v12.right = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 0LL, &v12);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, (LPPOINT)&v12, 2u);
  IntersectRect(a3, a3, &v12);
  v6 = *(_DWORD *)(a1 + 200);
  v7 = *(_DWORD *)(a1 + 204);
  v10[0] = a3->left;
  v10[1] = a3->top;
  v10[2] = a3->right;
  v10[3] = a3->bottom;
  v8 = *(_DWORD *)(a1 + 212) - v7;
  v9[0] = (float)((float)(*(_DWORD *)(a1 + 208) - v6) * 0.5) + (float)v6;
  v9[1] = (float)((float)v8 * 0.5) + (float)v7;
  ZoomRect(
    (const struct Geometry::CRect *)v10,
    (const struct Geometry::CPointFloat *)v9,
    (int)(*(double *)(a1 + 176) * 100.0),
    a3);
}
