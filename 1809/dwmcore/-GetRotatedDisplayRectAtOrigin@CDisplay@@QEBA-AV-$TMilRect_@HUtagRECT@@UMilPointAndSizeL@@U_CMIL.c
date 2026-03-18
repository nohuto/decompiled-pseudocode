/*
 * XREFs of ?GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18020389C
 * Callers:
 *     ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x180063F00 (-GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetRotatedDisplayRectAtOrigin(_DWORD *a1, _DWORD *a2)
{
  int v2; // r10d
  int v3; // r9d
  int v4; // eax
  int v5; // r8d
  _DWORD *result; // rax

  if ( ((a1[76] - 1) & 0xFFFFFFFD) != 0 )
  {
    v2 = a1[31];
    v3 = a1[30];
    v4 = a1[33];
    v5 = a1[32];
    *a2 = v2;
    a2[1] = v3;
    a2[2] = v4;
    a2[3] = v5;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 30);
    v3 = a2[1];
    v2 = *a2;
    v4 = a2[2];
    v5 = a2[3];
  }
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v4 - v2;
  result = a2;
  a2[3] = v5 - v3;
  return result;
}
