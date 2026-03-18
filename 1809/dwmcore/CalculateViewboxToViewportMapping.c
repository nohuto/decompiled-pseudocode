/*
 * XREFs of CalculateViewboxToViewportMapping @ 0x18008F8D0
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateViewboxToViewportMapping(float *a1, float *a2, int a3, __int64 a4, int a5, __int64 a6)
{
  float v6; // xmm3_4
  double v7; // xmm6_8
  double v8; // xmm7_8
  int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm0_4
  float v13; // xmm0_4
  unsigned int v14; // xmm0_4
  __int128 v15; // [rsp+0h] [rbp-70h]
  __int128 v16; // [rsp+10h] [rbp-60h]
  float v17[8]; // [rsp+30h] [rbp-40h]

  v6 = a2[1];
  v7 = (float)((float)(a1[2] - *a1) / (float)(a2[2] - *a2));
  v8 = (float)((float)(a1[3] - a1[1]) / (float)(a2[3] - v6));
  v9 = a3 - 2;
  if ( !v9 )
  {
    v7 = fmin(v7, v8);
    goto LABEL_6;
  }
  if ( v9 == 1 )
  {
    v7 = fmax(v7, v8);
LABEL_6:
    v8 = v7;
  }
  result = a6;
  LODWORD(v16) = 0;
  HIDWORD(v16) = 0;
  *(float *)&v11 = v7;
  v15 = v11;
  *(float *)&v12 = v8;
  *(_QWORD *)((char *)&v16 + 4) = v12;
  v17[3] = FLOAT_1_0;
  v13 = COERCE_FLOAT(*(_DWORD *)a2 ^ _xmm) * v7 + *a1;
  v17[0] = v13;
  *(float *)&v14 = COERCE_FLOAT(LODWORD(v6) ^ _xmm) * v8 + a1[1];
  *(_QWORD *)&v17[1] = v14;
  *(_OWORD *)a6 = v15;
  *(_OWORD *)(a6 + 16) = v16;
  *(_OWORD *)(a6 + 32) = _xmm;
  *(_OWORD *)(a6 + 48) = *(_OWORD *)v17;
  *(_DWORD *)(a6 + 64) = 0;
  return result;
}
