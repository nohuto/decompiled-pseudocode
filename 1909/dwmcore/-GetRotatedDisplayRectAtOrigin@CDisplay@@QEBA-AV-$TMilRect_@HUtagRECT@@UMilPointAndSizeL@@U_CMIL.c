/*
 * XREFs of ?GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18015E44C
 * Callers:
 *     ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x1800BFB90 (-GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall CDisplay::GetRotatedDisplayRectAtOrigin(_DWORD *a1, int *a2)
{
  int v2; // r9d
  int v3; // eax
  int v4; // r8d
  int v5; // r10d
  int *result; // rax

  if ( ((a1[74] - 1) & 0xFFFFFFFD) != 0 )
  {
    v2 = a1[30];
    v3 = a1[33];
    v4 = a1[32];
    v5 = a1[31];
    a2[1] = v2;
    a2[2] = v3;
    a2[3] = v4;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 30);
    v2 = a2[1];
    v5 = *a2;
    v3 = a2[2];
    v4 = a2[3];
  }
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v3 - v5;
  result = a2;
  a2[3] = v4 - v2;
  return result;
}
