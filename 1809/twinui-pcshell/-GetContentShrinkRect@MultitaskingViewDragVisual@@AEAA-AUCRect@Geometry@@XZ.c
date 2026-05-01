/*
 * XREFs of ?GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA?AUCRect@Geometry@@XZ @ 0x1803244CC
 * Callers:
 *     ?SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z @ 0x180324A80 (-SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall MultitaskingViewDragVisual::GetContentShrinkRect(__int64 a1, int *a2)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  float v9; // xmm0_4
  int v10; // edx

  v3 = FLOAT_1_0;
  v4 = (float)*(int *)(a1 + 56);
  v5 = (float)*(int *)(a1 + 60);
  if ( (float)(v4 / v5) < (float)((float)*(int *)(a1 + 64) / (float)*(int *)(a1 + 68)) )
  {
    v7 = (int)((double)*(int *)(a1 + 68) * *(double *)(a1 + 80));
    if ( v7 < *(_DWORD *)(a1 + 60) )
      v3 = (float)v7 / v5;
  }
  else
  {
    v6 = (int)((double)*(int *)(a1 + 64) * *(double *)(a1 + 80));
    if ( v6 < *(_DWORD *)(a1 + 56) )
      v3 = (float)v6 / v4;
  }
  v8 = *(_QWORD *)(a1 + 56);
  v9 = (float)(int)HIDWORD(*(_QWORD *)(a1 + 48));
  v10 = -(int)(float)((float)(int)*(_QWORD *)(a1 + 48) * v3);
  *a2 = v10;
  a2[1] = -(int)(float)(v9 * v3);
  a2[2] = v10 + (int)(float)((float)(int)v8 * v3);
  a2[3] = (int)(float)((float)SHIDWORD(v8) * v3) - (int)(float)(v9 * v3);
  return a2;
}
