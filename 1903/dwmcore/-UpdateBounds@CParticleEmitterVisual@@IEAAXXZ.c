/*
 * XREFs of ?UpdateBounds@CParticleEmitterVisual@@IEAAXXZ @ 0x1801EE8DC
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     ?IsEmptyDrawing@CParticleEmitterVisual@@QEBA_NXZ @ 0x1801EA540 (-IsEmptyDrawing@CParticleEmitterVisual@@QEBA_NXZ.c)
 */

void __fastcall CParticleEmitterVisual::UpdateBounds(CParticleEmitterVisual *this)
{
  float *v2; // rcx
  float *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float *v9; // rax
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float *i; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4

  *(_OWORD *)((char *)this + 6152) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !CParticleEmitterVisual::IsEmptyDrawing(this) )
  {
    v2 = (float *)*((_QWORD *)this + 72);
    v3 = (float *)*((_QWORD *)this + 71);
    if ( v3 != v2 )
    {
      v4 = *((float *)this + 1538);
      v5 = *((float *)this + 1539);
      v6 = *((float *)this + 1540);
      v7 = *((float *)this + 1541);
      do
      {
        v4 = fminf(v4, *v3);
        *((float *)this + 1538) = v4;
        v5 = fminf(v5, v3[1]);
        *((float *)this + 1539) = v5;
        v6 = fmaxf(v6, *v3);
        *((float *)this + 1540) = v6;
        v7 = fmaxf(v7, v3[1]);
        v3 += 3;
        *((float *)this + 1541) = v7;
      }
      while ( v3 != v2 );
    }
    v8 = 0.0;
    v9 = (float *)*((_QWORD *)this + 89);
    v10 = 0.0;
    v11 = 0.0;
    while ( v9 != *((float **)this + 90) )
    {
      v12 = fmaxf(*v9, v10);
      v13 = fmaxf(v9[1], v11);
      v9 += 2;
      v10 = v12;
      v11 = v13;
    }
    v14 = 0.0;
    for ( i = (float *)*((_QWORD *)this + 92); i != *((float **)this + 93); i += 2 )
    {
      v16 = fmaxf(*i, v8);
      v17 = fmaxf(i[1], v14);
      v8 = v16;
      v14 = v17;
    }
    v18 = (float)((float)(v11 * *((float *)this + 1535)) * v14) * *((float *)this + 1537);
    v19 = (float)((float)(v10 * *((float *)this + 1534)) * v8) * *((float *)this + 1536);
    v20 = sqrtf_0((float)(v18 * v18) + (float)(v19 * v19));
    v21 = *((float *)this + 1539) - v20;
    *((float *)this + 1538) = *((float *)this + 1538) - v20;
    v22 = v20;
    v23 = v20 + *((float *)this + 1541);
    v24 = v22 + *((float *)this + 1540);
    *((float *)this + 1539) = v21;
    *((float *)this + 1541) = v23;
    *((float *)this + 1540) = v24;
    *(_OWORD *)((char *)this + 6152) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
}
