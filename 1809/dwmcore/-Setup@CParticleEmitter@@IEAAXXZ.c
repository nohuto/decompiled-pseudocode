/*
 * XREFs of ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C
 * Callers:
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801C4964 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ??$?0UKeyframeData@@$0?0X@?$span@$$CBUKeyframeData@@$0?0@gsl@@QEAA@AEBV?$span@UKeyframeData@@$0?0@1@@Z @ 0x1801C392C (--$-0UKeyframeData@@$0-0X@-$span@$$CBUKeyframeData@@$0-0@gsl@@QEAA@AEBV-$span@UKeyframeData@@$0-.c)
 *     ??$Create@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@MV?$allocator@M@6@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@HHAEAV?$vector@MV?$allocator@M@std@@@4@HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3964 (--$Create@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Windows@.c)
 *     ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@MV?$allocator@M@6@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HHAEAV?$vector@MV?$allocator@M@std@@@4@HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3A54 (--$Create@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@Windows@.c)
 *     ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@U1234@V56@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HH1HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3B40 (--$Create@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Founda_ea_1801C3B40.c)
 *     ?Reserve@Particles@CParticleEmitter@@QEAAXH@Z @ 0x1801C6960 (-Reserve@Particles@CParticleEmitter@@QEAAXH@Z.c)
 *     ?Convert@?$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD660 (-Convert@-$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV-$span@$$CBUKeyframeDat.c)
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08 (-Convert@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CParticleEmitter::Setup(CParticleEmitter *this)
{
  __int64 *v2; // r12
  __int32 v3; // eax
  int v4; // edx
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 *v13; // rbx
  unsigned __int64 *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // rsi
  int v20; // eax
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  unsigned __int64 *v26; // r14
  _QWORD *v27; // rsi
  int v28; // eax
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 *v33; // r14
  int v34; // eax
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // r8
  unsigned __int64 *v39; // r14
  int v40; // eax
  unsigned __int64 *v41; // rdx
  unsigned __int64 v42; // rax
  _DWORD *v43; // rax
  __int64 v44; // r8
  void ***v45; // rdi
  int v46; // eax
  void ***v47; // rdx
  void **v48; // rax
  int v49; // [rsp+30h] [rbp-D8h]
  int v50; // [rsp+30h] [rbp-D8h]
  __m128 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  int *v53; // [rsp+60h] [rbp-A8h]
  __int64 v54[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+78h] [rbp-90h] BYREF
  int v56; // [rsp+7Ch] [rbp-8Ch]
  int v57; // [rsp+90h] [rbp-78h]
  int v58; // [rsp+98h] [rbp-70h]
  int v59; // [rsp+9Ch] [rbp-6Ch]
  int v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+C0h] [rbp-48h]
  int v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+CCh] [rbp-3Ch]
  int v65; // [rsp+D0h] [rbp-38h]
  __int64 v66; // [rsp+D8h] [rbp-30h]
  int v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F8h] [rbp-10h]
  int v69; // [rsp+FCh] [rbp-Ch]
  __int64 v70; // [rsp+108h] [rbp+0h]
  int v71; // [rsp+120h] [rbp+18h]
  int v72; // [rsp+128h] [rbp+20h]
  int v73; // [rsp+12Ch] [rbp+24h]
  void *retaddr; // [rsp+170h] [rbp+68h]

  v51.m128_i32[2] = 0x80000000;
  *((_DWORD *)this + 1395) = 5460;
  v2 = (__int64 *)((char *)this + 56);
  *((_DWORD *)this + 1392) = 5460;
  *((_DWORD *)this + 1391) = 5460;
  v3 = v51.m128_i32[2];
  *((_DWORD *)this + 1387) = 0;
  *((_DWORD *)this + 1388) = 1084227584;
  *((_DWORD *)this + 1390) = 1048576000;
  *((_DWORD *)this + 1389) = 1036831949;
  *((_OWORD *)this + 352) = _xmm;
  *((_DWORD *)this + 1420) = 1084227584;
  *((_OWORD *)this + 353) = _xmm;
  *((_DWORD *)this + 1421) = 1084227584;
  *((_QWORD *)this + 698) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N0_0), (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  *((_DWORD *)this + 1398) = v3;
  *((_DWORD *)this + 1418) = 1065353216;
  *((_DWORD *)this + 1419) = 1065353216;
  *((_DWORD *)this + 1417) = 1142292480;
  *((_DWORD *)this + 1416) = 1142292480;
  *((_DWORD *)this + 1423) = 0;
  *((_DWORD *)this + 1424) = 1086918619;
  *((_DWORD *)this + 1399) = 1061752795;
  *((_DWORD *)this + 1400) = 1112014848;
  *(_QWORD *)((char *)this + 5604) = 1120403456LL;
  *((_DWORD *)this + 1403) = 0;
  *((_BYTE *)this + 5688) = 1;
  v4 = *((_DWORD *)this + 1395);
  *((float *)this + 1393) = (float)v4 / (float)((float)*((int *)this + 1392) / *((float *)this + 1390));
  CParticleEmitter::Particles::Reserve((CParticleEmitter *)((char *)this + 56), v4);
  v55 = 0;
  v51.m128_u64[0] = _xmm;
  v51.m128_u64[1] = _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0];
  v5 = *(__m128 *)((char *)this + 392);
  v56 = 0;
  v57 = 1;
  v6 = _mm_add_ps(v5, v51);
  v51.m128_u64[0] = _xmm;
  v51.m128_u64[1] = _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0];
  v58 = 1008981770;
  v61 = 1048576000LL;
  v62 = 1;
  v63 = 1065353216;
  v66 = 1061158912LL;
  *(__m128 *)((char *)this + 392) = _mm_add_ps(v6, v51);
  v67 = 1;
  v68 = 1065353216;
  *(_OWORD *)((char *)this + 408) = 0LL;
  v70 = 1065353216LL;
  v71 = 1;
  v72 = 1008981770;
  v51.m128_u64[0] = 0LL;
  v52 = 4LL;
  v53 = &v55;
  gsl::span<KeyframeData const,-1>::span<KeyframeData const,-1>(v54, &v52);
  v8 = Particles::LinearKeyframeAnimation<float>::Convert(v7, v54, &v51);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
  v11 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,float,std::allocator<float>>(
          v51.m128_i64[0],
          (_QWORD *)this + 16,
          v9,
          v10,
          (__int64 *)this + 25,
          v49,
          (void ***)this + 37);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  v12 = *((_QWORD *)this + 37);
  v13 = (__int64 *)((char *)this + 256);
  v14 = (unsigned __int64 *)*((_QWORD *)this + 33);
  v51.m128_u64[0] = v12;
  if ( *((unsigned __int64 **)this + 34) == v14 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
      (__int64 *)this + 32,
      v14,
      &v51);
  }
  else
  {
    *v14 = v12;
    *((_QWORD *)this + 33) += 8LL;
  }
  v55 = 0;
  v53 = &v55;
  v56 = 0;
  v57 = 1;
  v58 = 1092616192;
  v59 = 1092616192;
  v61 = 1048576000LL;
  v62 = 1;
  v63 = 1065353216;
  v64 = 1065353216;
  v66 = 1061158912LL;
  v67 = 1;
  v68 = 1065353216;
  v69 = 1065353216;
  v70 = 1065353216LL;
  v71 = 1;
  v72 = 1092616192;
  v73 = 1092616192;
  v51.m128_u64[0] = 0LL;
  v52 = 4LL;
  gsl::span<KeyframeData const,-1>::span<KeyframeData const,-1>(v54, &v52);
  v16 = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::Convert(v15, v54, &v51);
  if ( v16 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v16, retaddr);
  v19 = (unsigned __int64 *)((char *)this + 280);
  v20 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>,float,std::allocator<float>>(
          v51.m128_i64[0],
          (_QWORD *)this + 22,
          v17,
          v18,
          (__int64 *)this + 25,
          v50,
          (void ***)this + 35);
  if ( v20 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
  v21 = (unsigned __int64 *)*((_QWORD *)this + 33);
  v22 = *v19;
  v51.m128_u64[0] = *v19;
  if ( *((unsigned __int64 **)this + 34) == v21 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
      (__int64 *)this + 32,
      v21,
      &v51);
  }
  else
  {
    *v21 = v22;
    *((_QWORD *)this + 33) += 8LL;
  }
  v55 = 0;
  v64 = 0;
  v65 = 0;
  v57 = 1;
  v62 = 1;
  v53 = &v55;
  v61 = LODWORD(FLOAT_5_0);
  v56 = 0;
  v58 = 1065353216;
  v59 = 1065353216;
  v60 = 1065353216;
  v63 = 1065353216;
  v51.m128_u64[0] = 0LL;
  v52 = 2LL;
  gsl::span<KeyframeData const,-1>::span<KeyframeData const,-1>(v54, &v52);
  v24 = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::Convert(v23, v54, &v51);
  if ( v24 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
  v26 = (unsigned __int64 *)((char *)this + 304);
  v27 = (_QWORD *)((char *)this + 80);
  v28 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
          v51.m128_i64[0],
          (_QWORD *)this + 16,
          v25,
          12,
          (__int64 *)this + 10,
          3,
          (void ***)this + 38);
  if ( v28 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v28, retaddr);
  v29 = (unsigned __int64 *)*((_QWORD *)this + 33);
  v30 = *v26;
  v51.m128_u64[0] = *v26;
  if ( *((unsigned __int64 **)this + 34) == v29 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
      (__int64 *)this + 32,
      v29,
      &v51);
  }
  else
  {
    *v29 = v30;
    *((_QWORD *)this + 33) += 8LL;
  }
  v31 = operator new(0x18uLL);
  if ( v31 )
  {
    *v31 = &Particles::Attractor::`vftable';
    v31[1] = 1140457472LL;
    *((_DWORD *)v31 + 4) = 1112014848;
    *((_DWORD *)v31 + 5) = 1128792064;
  }
  else
  {
    v31 = 0LL;
  }
  v33 = (unsigned __int64 *)((char *)this + 376);
  v34 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
          (__int64)v31,
          (_QWORD *)this + 10,
          v32,
          8,
          v2,
          0,
          (void ***)this + 47);
  if ( v34 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v34, retaddr);
  v35 = (unsigned __int64 *)*((_QWORD *)this + 33);
  v36 = *v33;
  v51.m128_u64[0] = *v33;
  if ( *((unsigned __int64 **)this + 34) == v35 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
      (__int64 *)this + 32,
      v35,
      &v51);
  }
  else
  {
    *v35 = v36;
    *((_QWORD *)this + 33) += 8LL;
  }
  v37 = operator new(0x18uLL);
  if ( v37 )
  {
    v37[2] = 0;
    *(_QWORD *)v37 = &Particles::Attractor::`vftable';
    v37[3] = 1133903872;
    v37[4] = -1046478848;
    v37[5] = 1128792064;
  }
  else
  {
    v37 = 0LL;
  }
  v39 = (unsigned __int64 *)((char *)this + 384);
  v40 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
          (__int64)v37,
          (_QWORD *)this + 10,
          v38,
          8,
          v2,
          0,
          (void ***)this + 48);
  if ( v40 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v40, retaddr);
  v41 = (unsigned __int64 *)*((_QWORD *)this + 33);
  v42 = *v39;
  v51.m128_u64[0] = *v39;
  if ( *((unsigned __int64 **)this + 34) == v41 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
      (__int64 *)this + 32,
      v41,
      &v51);
  }
  else
  {
    *v41 = v42;
    *((_QWORD *)this + 33) += 8LL;
  }
  v43 = operator new(0x10uLL);
  if ( v43 )
  {
    v43[2] = 1143930880;
    *(_QWORD *)v43 = &Particles::FloorBouncer::`vftable';
    v43[3] = 1065353216;
  }
  else
  {
    v43 = 0LL;
  }
  v45 = (void ***)((char *)this + 344);
  v46 = Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
          (__int64)v43,
          v27,
          v44,
          8,
          v2,
          0,
          v45);
  if ( v46 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v46, retaddr);
  v47 = (void ***)v13[1];
  v48 = *v45;
  v51.m128_u64[0] = (unsigned __int64)*v45;
  if ( (void ***)v13[2] == v47 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(v13, v47, &v51);
  }
  else
  {
    *v47 = v48;
    v13[1] += 8LL;
  }
}
