/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180002CA4
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AD40 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall ClipRectAndSimilarRect(int *a1, float *a2, float *a3)
{
  _UNKNOWN **result; // rax
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  __int128 v10; // [rsp+0h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a2[2] - *a2;
  if ( v4 > 0.0 && (float)(a2[3] - a2[1]) > 0.0 )
  {
    v5 = a3[2];
    v6 = a3[3];
    *((_QWORD *)&v10 + 1) = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf((float)a1[3], a2[3])),
                              COERCE_UNSIGNED_INT(fminf((float)a1[2], a2[2])));
    v7 = v6 - a3[1];
    *(_QWORD *)&v10 = __PAIR64__(
                        COERCE_UNSIGNED_INT(fmaxf((float)a1[1], a2[1])),
                        COERCE_UNSIGNED_INT(fmaxf((float)*a1, *a2)));
    v8 = (float)((float)((float)(v5 - *a3) * (float)(*(float *)&v10 - *a2)) / v4) + *a3;
    *a3 = v8;
    v9 = (float)((float)(v7 * (float)(*((float *)&v10 + 1) - a2[1])) / (float)(a2[3] - a2[1])) + a3[1];
    a3[1] = v9;
    a3[2] = (float)((float)((float)(*((float *)&v10 + 2) - *(float *)&v10) * (float)(v5 - v8)) / (float)(a2[2] - *a2))
          + v8;
    a3[3] = (float)((float)((float)(*((float *)&v10 + 3) - *((float *)&v10 + 1)) * (float)(v6 - v9))
                  / (float)(a2[3] - a2[1]))
          + v9;
    *(_OWORD *)a2 = v10;
  }
  return result;
}
