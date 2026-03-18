/*
 * XREFs of ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1801676C4 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DD084 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@.c)
 *     ??0?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DD350 (--0-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$allocator@U-.c)
 *     ??D?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@XZ @ 0x1801DD424 (--D-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@.c)
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE1F8 (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particle.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::Convert(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm2
  int v11; // xmm1_4
  int v12; // r9d
  _DWORD *v13; // rdi
  unsigned int v15; // [rsp+28h] [rbp-59h]
  __int128 v16; // [rsp+38h] [rbp-49h] BYREF
  __int128 v17; // [rsp+48h] [rbp-39h] BYREF
  char *v18; // [rsp+58h] [rbp-29h]
  __int128 v19; // [rsp+68h] [rbp-19h] BYREF
  int v20; // [rsp+80h] [rbp-1h]
  __int128 v21; // [rsp+88h] [rbp+7h] BYREF
  __int128 v22; // [rsp+98h] [rbp+17h] BYREF
  __int128 v23; // [rsp+B8h] [rbp+37h]
  void *retaddr; // [rsp+E0h] [rbp+5Fh]

  v3 = *a2;
  v4 = 0;
  v18 = 0LL;
  v17 = 0LL;
  if ( v3 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Reallocate_exactly(&v17, v3);
    v3 = *a2;
  }
  *(_QWORD *)&v16 = a2;
  *((_QWORD *)&v16 + 1) = v3;
  v19 = (unsigned __int64)a2;
  v7 = (char *)*((_QWORD *)&v17 + 1);
  v21 = v16;
  while ( 1 )
  {
    v22 = v19;
    if ( !gsl::details::operator!=(&v22, &v21) )
      break;
    v8 = gsl::details::span_iterator<gsl::span<KeyframeData const,-1>,0>::operator*((gsl::details *)&v19);
    v9 = HIDWORD(*(_QWORD *)v8);
    v23 = *(_OWORD *)(v8 + 16);
    if ( (_DWORD)v9 || DWORD2(v23) != 1 )
    {
      v12 = -2147467259;
      v15 = 47;
LABEL_19:
      v4 = v12;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, v15);
      goto LABEL_20;
    }
    v10 = (__m128)*(unsigned int *)(v8 + 36);
    v11 = *(_DWORD *)v8;
    v20 = *(_DWORD *)(v8 + 40);
    *(_QWORD *)((char *)&v16 + 4) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v8 + 32), v10).m128_u64[0];
    LODWORD(v16) = v11;
    HIDWORD(v16) = v20;
    if ( v18 == v7 )
    {
      std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3> const &>(
        (__int128 **)&v17,
        v7,
        &v16);
      v7 = (char *)*((_QWORD *)&v17 + 1);
    }
    else
    {
      *(_OWORD *)v7 = v16;
      v7 += 16;
      *((_QWORD *)&v17 + 1) = v7;
    }
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v19);
  }
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  if ( v13 )
  {
    v13[2] = 2;
    *(_QWORD *)v13 = &Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::`vftable';
    std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
      (_QWORD *)v13 + 2,
      &v17);
  }
  else
  {
    v13 = 0LL;
  }
  *a3 = v13;
  if ( !v13 )
  {
    v12 = -2147024882;
    v15 = 65;
    goto LABEL_19;
  }
LABEL_20:
  std::vector<MilRectF>::_Tidy((__int64)&v17);
  return v4;
}
