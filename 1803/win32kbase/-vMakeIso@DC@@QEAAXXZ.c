/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0024F00 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 *     bFToL @ 0x1C006312C (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C85AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C85E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  int *v1; // rbx
  INT v3; // r8d
  INT v4; // edx
  unsigned int v5; // edi
  __m128i v6; // xmm0
  float v7; // xmm6_4
  float v8; // xmm6_4
  unsigned int v9; // eax
  int v10; // edi
  float v11; // xmm1_4
  float v12; // xmm2_4
  char v13; // r8
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = (int *)*((_QWORD *)this + 10);
  v3 = v1[89];
  if ( v3 )
  {
    v4 = v1[93];
    if ( !v4 || (v5 = v1[94]) == 0 )
    {
      v8 = (float)((float)(v1[90] * v1[91]) / (float)v3) / (float)v1[92];
      goto LABEL_8;
    }
    v6 = _mm_cvtsi32_si128(v5);
    v7 = (float)EngMulDiv(v1[90], v4, v3);
  }
  else
  {
    v17 = *((_QWORD *)this + 6);
    v7 = (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
    v9 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
    v1 = (int *)*((_QWORD *)this + 10);
    v6 = _mm_cvtsi32_si128(v9);
  }
  v8 = v7 / _mm_cvtepi32_ps(v6).m128_f32[0];
LABEL_8:
  v10 = v1[86];
  v11 = (float)v1[83];
  v12 = (float)v1[82];
  bFToL((float)((float)((float)v10 * v11) / v12) * v8, (int *)&v17, 6);
  v14 = abs32(v17);
  v15 = v1[87];
  LODWORD(v17) = v14;
  if ( v15 <= 0 )
  {
    if ( -v15 >= v14 )
    {
      v14 = -v14;
      goto LABEL_10;
    }
  }
  else if ( v15 >= v14 )
  {
LABEL_10:
    v1[87] = v14;
    return;
  }
  bFToL((float)((float)((float)v15 * v12) / v11) / v8, (int *)&v17, v13);
  v16 = abs32(v17);
  if ( v10 <= 0 )
    v16 = -v16;
  v1[86] = v16;
}
