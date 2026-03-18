/*
 * XREFs of ?UpdateBounds@CParticleEmitter@@IEAAXXZ @ 0x1801C785C
 * Callers:
 *     ?Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C7770 (-Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CParticleEmitter::UpdateBounds(CParticleEmitter *this, __int64 a2)
{
  __int64 (__fastcall *v3)(CParticleEmitter *, __int64); // rax
  char v4; // al
  unsigned int v5; // ecx
  float *v6; // rdx
  float *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float *v13; // rax
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float *v19; // rax
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  __int64 v23; // r8
  float v24; // xmm7_4
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4

  v3 = *(__int64 (__fastcall **)(CParticleEmitter *, __int64))(*(_QWORD *)this + 192LL);
  *((_OWORD *)this + 360) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = v3(this, a2);
  v5 = 0;
  if ( !v4 )
  {
    v6 = (float *)*((_QWORD *)this + 8);
    v7 = (float *)*((_QWORD *)this + 7);
    if ( v7 != v6 )
    {
      v8 = *((float *)this + 1440);
      v9 = *((float *)this + 1441);
      v10 = *((float *)this + 1442);
      v11 = *((float *)this + 1443);
      do
      {
        v8 = fminf(v8, *v7);
        *((float *)this + 1440) = v8;
        v9 = fminf(v9, v7[1]);
        *((float *)this + 1441) = v9;
        v10 = fmaxf(v10, *v7);
        *((float *)this + 1442) = v10;
        v11 = fmaxf(v11, v7[1]);
        v7 += 4;
        *((float *)this + 1443) = v11;
      }
      while ( v7 != v6 );
    }
    v12 = 0.0;
    v13 = (float *)*((_QWORD *)this + 19);
    v14 = 0.0;
    v15 = 0.0;
    while ( v13 != *((float **)this + 20) )
    {
      v16 = fmaxf(*v13, v14);
      v17 = fmaxf(v13[1], v15);
      v13 += 2;
      v14 = v16;
      v15 = v17;
    }
    v18 = 0.0;
    v19 = (float *)*((_QWORD *)this + 22);
    v20 = 0.0;
    while ( v19 != *((float **)this + 23) )
    {
      v21 = fmaxf(*v19, v18);
      v22 = fmaxf(v19[1], v20);
      v19 += 2;
      v18 = v21;
      v20 = v22;
    }
    v23 = *((_QWORD *)this + 65);
    v24 = 0.0;
    v25 = (*((_QWORD *)this + 66) - v23) >> 3;
    if ( v25 )
    {
      v26 = 0LL;
      do
      {
        ++v5;
        v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v23 + 8 * v26)) & _xmm);
        v28 = *(float *)(v23 + 8 * v26 + 4);
        v26 = v5;
        v12 = fmaxf(v27, v12);
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28) & _xmm);
        v24 = fmaxf(v29, v24);
      }
      while ( v5 < v25 );
    }
    v30 = sqrtf_0(
            (float)((float)((float)(v15 * v20) * v24) * (float)((float)(v15 * v20) * v24))
          + (float)((float)((float)(v14 * v18) * v12) * (float)((float)(v14 * v18) * v12)));
    v31 = *((float *)this + 1441) - v30;
    *((float *)this + 1440) = *((float *)this + 1440) - v30;
    v32 = v30 + *((float *)this + 1442);
    v33 = v30 + *((float *)this + 1443);
    *((float *)this + 1441) = v31;
    *((float *)this + 1442) = v32;
    *((float *)this + 1443) = v33;
  }
}
