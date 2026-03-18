/*
 * XREFs of CalculateViewboxToViewportMapping @ 0x1800C4D8C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateViewboxToViewportMapping(float *a1, float *a2, int a3, __int64 a4, int a5, __int64 a6)
{
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // xmm1_4
  unsigned int v12; // xmm3_4
  __int128 v13; // [rsp+0h] [rbp-50h]
  __int128 v14; // [rsp+10h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-20h]

  v6 = a2[1];
  v7 = (float)(a1[2] - *a1) / (float)(a2[2] - *a2);
  v8 = (float)(a1[3] - a1[1]) / (float)(a2[3] - v6);
  v9 = a3 - 2;
  if ( !v9 )
  {
    v7 = fminf(v7, v8);
    goto LABEL_6;
  }
  if ( v9 == 1 )
  {
    v7 = fmaxf(v7, v8);
LABEL_6:
    v8 = v7;
  }
  result = a6;
  LODWORD(v14) = 0;
  HIDWORD(v14) = 0;
  DWORD2(v15) = 0;
  v13 = LODWORD(v7);
  *(_QWORD *)((char *)&v14 + 4) = LODWORD(v8);
  HIDWORD(v15) = (_DWORD)FLOAT_1_0;
  *(float *)&v11 = (float)(v7 * COERCE_FLOAT(*(_DWORD *)a2 ^ _xmm)) + *a1;
  *(float *)&v12 = (float)(v8 * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + a1[1];
  *(_OWORD *)a6 = v13;
  *(_QWORD *)&v15 = __PAIR64__(v12, v11);
  *(_OWORD *)(a6 + 16) = v14;
  *(_OWORD *)(a6 + 32) = _xmm;
  *(_OWORD *)(a6 + 48) = v15;
  *(_DWORD *)(a6 + 64) = 0;
  return result;
}
