/*
 * XREFs of ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EBBB4
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?NormalizeFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAXXZ @ 0x1801E9F50 (-NormalizeFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAA.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@UParticleStreamInfo@2@1I@Z @ 0x1801EA020 (-Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@UParticleStreamInfo@2@1I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z @ 0x1801EA118 (-Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x1801EA284 (-Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z.c)
 *     ?InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA?AUParticleStreamInfo@Particles@@W4ParticleInputSource@4Composition@UI@Windows@@@Z @ 0x1801ED6FC (-InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA-AUParticleStreamInfo@Particles@@W4P.c)
 */

void __fastcall CParticleEmitterVisual::ApplyActiveBehaviors(CParticleEmitterVisual *this, float a2)
{
  __int64 v2; // r9
  char v4; // si
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // xmm0
  unsigned int i; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  float v27; // xmm0_4
  _QWORD *v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned int v59; // r9d
  __int64 v60; // rdx
  __int64 *v61; // rsi
  __int64 *v62; // rdi
  __int64 v63; // rcx
  unsigned int v64; // r9d
  unsigned int v65; // [rsp+20h] [rbp-60h]
  unsigned int v66; // [rsp+20h] [rbp-60h]
  unsigned int v67; // [rsp+20h] [rbp-60h]
  unsigned int v68; // [rsp+20h] [rbp-60h]
  unsigned int v69; // [rsp+20h] [rbp-60h]
  unsigned int v70; // [rsp+20h] [rbp-60h]
  unsigned int v71; // [rsp+20h] [rbp-60h]
  unsigned int v72; // [rsp+28h] [rbp-58h]
  __int128 v73; // [rsp+30h] [rbp-50h] BYREF
  __int128 v74; // [rsp+40h] [rbp-40h] BYREF
  __int128 v75; // [rsp+50h] [rbp-30h] BYREF
  __int128 v76; // [rsp+60h] [rbp-20h] BYREF
  __int128 v77; // [rsp+70h] [rbp-10h] BYREF

  v2 = *((_QWORD *)this + 783);
  v4 = 0;
  v5 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 80);
    if ( v6 && (*(_QWORD *)(v6 + 96) - *(_QWORD *)(v6 + 88)) / 12LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v73, *(unsigned int *)(v6 + 72));
      v7 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v8 = *(_QWORD *)(v7 + 80);
      *(_QWORD *)&v74 = *((_QWORD *)this + 83);
      v9 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 107);
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v75 = v9;
      Particles::BulkAnimator::Update(
        (v8 + 80) & -(__int64)(v8 != 0),
        (__int64)&v73,
        (__int64 *)&v74,
        (__int64 *)&v75,
        *((_DWORD *)this + 256));
      v2 = *((_QWORD *)this + 783);
      v5 = 1;
    }
    v10 = *(_QWORD *)(v2 + 72);
    if ( v10 && (*(_QWORD *)(v10 + 96) - *(_QWORD *)(v10 + 88)) / 20LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v75, *(unsigned int *)(v10 + 72));
      v11 = (*(_QWORD *)(*((_QWORD *)this + 783) + 72LL) + 80LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 783) + 72LL) != 0LL);
      *(_QWORD *)&v73 = &Particles::DirectionAnimator::`vftable';
      *((_QWORD *)&v73 + 1) = v11;
      Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(v11);
      v12 = *((_QWORD *)this + 83);
      *(_QWORD *)&v74 = *((_QWORD *)this + 77);
      *((_QWORD *)&v74 + 1) = 0x300000000LL;
      v13 = v74;
      *(_QWORD *)&v74 = v12;
      v14 = *((_QWORD *)this + 110);
      HIDWORD(v74) = 1;
      v76 = v13;
      v15 = v74;
      *(_QWORD *)&v74 = v14;
      v72 = *((_DWORD *)this + 256);
      *((_QWORD *)&v74 + 1) = 0x300000000LL;
      v77 = v15;
      Particles::BulkAnimator::Update(
        (__int64)&v73,
        (__int64)&v75,
        (__int64 *)&v74,
        (__int64 *)&v77,
        (__int64 *)&v76,
        v72);
      v4 = 1;
    }
    if ( v5 )
    {
      if ( !v4 )
      {
        for ( i = 0; i < *((_DWORD *)this + 256); *(float *)(v17 + 4 * v20 + 8) = v27 )
        {
          v17 = *((_QWORD *)this + 77);
          v18 = *((_QWORD *)this + 83);
          v19 = i++;
          v20 = 3 * v19;
          v21 = _mm_movelh_ps(
                  (__m128)*(unsigned __int64 *)(v17 + 12 * v19),
                  (__m128)*(unsigned int *)(v17 + 12 * v19 + 8));
          v22 = _mm_mul_ps(v21, v21);
          v23 = _mm_shuffle_ps(v22, v22, 102);
          v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
          v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
          LODWORD(v73) = v24.m128_i32[0];
          v25 = (__m128)v24.m128_u32[0];
          v25.m128_f32[0] = v24.m128_f32[0] * *(float *)(v18 + 4 * v19);
          *((float *)&v73 + 1) = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
          v26 = (__m128)DWORD1(v73);
          v26.m128_f32[0] = *((float *)&v73 + 1) * *(float *)(v18 + 4 * v19);
          *((float *)&v73 + 2) = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
          v27 = *((float *)&v73 + 2) * *(float *)(v18 + 4 * v19);
          *(_QWORD *)(v17 + 4 * v20) = _mm_unpacklo_ps(v25, v26).m128_u64[0];
          *((float *)&v74 + 2) = v27;
        }
      }
    }
    v28 = (_QWORD *)*((_QWORD *)this + 783);
    v29 = v28[12];
    if ( v29 && (*(_QWORD *)(v29 + 96) - *(_QWORD *)(v29 + 88)) / 24LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v29 + 72));
      v30 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x400000000LL;
      v31 = *(_QWORD *)(v30 + 96);
      *(_QWORD *)&v74 = *((_QWORD *)this + 74);
      v32 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 104);
      v76 = v32;
      *((_QWORD *)&v74 + 1) = 0x400000000LL;
      v65 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v31 + 80) & -(__int64)(v31 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v65);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v33 = v28[11];
    if ( v33 && (*(_QWORD *)(v33 + 96) - *(_QWORD *)(v33 + 88)) / 12LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v33 + 72));
      v34 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v35 = *(_QWORD *)(v34 + 88);
      *(_QWORD *)&v74 = *((_QWORD *)this + 80);
      v36 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 116);
      v76 = v36;
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v66 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v35 + 80) & -(__int64)(v35 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v66);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v37 = v28[13];
    if ( v37 && (*(_QWORD *)(v37 + 96) - *(_QWORD *)(v37 + 88)) / 20LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v37 + 72));
      v38 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x400000000LL;
      v39 = *(_QWORD *)(v38 + 104);
      *(_QWORD *)&v74 = *((_QWORD *)this + 86);
      v40 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 119);
      v76 = v40;
      *((_QWORD *)&v74 + 1) = 0x400000000LL;
      v67 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v39 + 80) & -(__int64)(v39 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v67);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v41 = v28[14];
    if ( v41 && (*(_QWORD *)(v41 + 96) - *(_QWORD *)(v41 + 88)) / 12LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v41 + 72));
      v42 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x400000003LL;
      v43 = *(_QWORD *)(v42 + 112);
      *(_QWORD *)&v74 = *((_QWORD *)this + 86);
      v44 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 119);
      v76 = v44;
      *((_QWORD *)&v74 + 1) = 0x400000003LL;
      v68 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v43 + 80) & -(__int64)(v43 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v68);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v45 = v28[15];
    if ( v45 && (__int64)(*(_QWORD *)(v45 + 96) - *(_QWORD *)(v45 + 88)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v45 + 72));
      v46 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x200000000LL;
      v47 = *(_QWORD *)(v46 + 120);
      *(_QWORD *)&v74 = *((_QWORD *)this + 92);
      v48 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 125);
      v76 = v48;
      *((_QWORD *)&v74 + 1) = 0x200000000LL;
      v69 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v47 + 80) & -(__int64)(v47 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v69);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v49 = v28[16];
    if ( v49 && (__int64)(*(_QWORD *)(v49 + 96) - *(_QWORD *)(v49 + 88)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v49 + 72));
      v50 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x200000000LL;
      v51 = *(_QWORD *)(v50 + 128);
      *(_QWORD *)&v74 = *((_QWORD *)this + 89);
      v52 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 122);
      v76 = v52;
      *((_QWORD *)&v74 + 1) = 0x200000000LL;
      v70 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v51 + 80) & -(__int64)(v51 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v70);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v53 = v28[17];
    if ( v53 && (*(_QWORD *)(v53 + 96) - *(_QWORD *)(v53 + 88)) / 12LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v53 + 72));
      v54 = *((_QWORD *)this + 783);
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v55 = *(_QWORD *)(v54 + 136);
      *(_QWORD *)&v74 = *((_QWORD *)this + 95);
      v56 = v74;
      *(_QWORD *)&v74 = *((_QWORD *)this + 98);
      v76 = v56;
      *((_QWORD *)&v74 + 1) = 0x100000000LL;
      v71 = *((_DWORD *)this + 256);
      v75 = v74;
      Particles::BulkAnimator::Update(
        (v55 + 80) & -(__int64)(v55 != 0),
        (__int64)&v77,
        (__int64 *)&v75,
        (__int64 *)&v76,
        v71);
      v28 = (_QWORD *)*((_QWORD *)this + 783);
    }
    v57 = v28[18];
    if ( v57 && (*(_QWORD *)(v57 + 96) - *(_QWORD *)(v57 + 88)) / 20LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 568, &v77, *(unsigned int *)(v57 + 72));
      v58 = *((_QWORD *)this + 783);
      v59 = *((_DWORD *)this + 256);
      *((_QWORD *)&v74 + 1) = 0x300000000LL;
      v60 = *(_QWORD *)(v58 + 144);
      *(_QWORD *)&v73 = &Particles::ForceAnimator::`vftable';
      *((_QWORD *)&v73 + 1) = (v60 + 80) & -(__int64)(v60 != 0);
      *(_QWORD *)&v74 = *((_QWORD *)this + 77);
      v76 = v74;
      Particles::BulkAnimator::Update((__int64)&v73, (__int64)&v77, (__int64 *)&v76, v59);
    }
  }
  v61 = (__int64 *)*((_QWORD *)this + 133);
  v62 = (__int64 *)*((_QWORD *)this + 132);
  if ( v62 != v61 )
  {
    *((_QWORD *)&v74 + 1) = 0x300000000LL;
    *((_QWORD *)&v73 + 1) = 0x300000000LL;
    do
    {
      v63 = *v62;
      v64 = *((_DWORD *)this + 256);
      *(_QWORD *)&v74 = *((_QWORD *)this + 77);
      *(_QWORD *)&v73 = *((_QWORD *)this + 71);
      v77 = v74;
      v76 = v73;
      Particles::BulkAnimator::Update((v63 + 72) & -(__int64)(v63 != 0), (__int64)&v76, (__int64 *)&v77, v64);
      ++v62;
    }
    while ( v62 != v61 );
  }
}
