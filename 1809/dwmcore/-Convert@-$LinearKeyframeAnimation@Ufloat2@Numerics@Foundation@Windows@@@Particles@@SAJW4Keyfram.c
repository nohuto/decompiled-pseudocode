/*
 * XREFs of ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCED8 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@.c)
 *     ??0?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DD27C (--0-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$allocator@U-.c)
 *     ??D?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@XZ @ 0x1801DD424 (--D-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@.c)
 *     ?_Tidy@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXXZ @ 0x1801DE280 (-_Tidy@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$allocato.c)
 *     ?reserve@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAX_K@Z @ 0x1801DE2DC (-reserve@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$alloca.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::Convert(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm1_4
  float v13; // xmm2_4
  int v14; // eax
  int v15; // r9d
  LPVOID v16; // rbx
  unsigned int v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+38h] [rbp-39h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h]
  __int128 v22; // [rsp+68h] [rbp-9h] BYREF
  __int128 v23; // [rsp+78h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+17h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+37h]

  v4 = *a2;
  v5 = 0;
  v21 = 0LL;
  v20 = 0LL;
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::reserve(&v20, v4);
  v7 = *a2;
  *(_QWORD *)&v19 = a2;
  *((_QWORD *)&v19 + 1) = v7;
  v22 = (unsigned __int64)a2;
  v8 = *((_QWORD *)&v20 + 1);
  v23 = v19;
  while ( 1 )
  {
    v24 = v22;
    if ( !gsl::details::operator!=(&v24, &v23) )
      break;
    v9 = gsl::details::span_iterator<gsl::span<KeyframeData const,-1>,0>::operator*((gsl::details *)&v22);
    v10 = HIDWORD(*(_QWORD *)v9);
    v25 = *(_OWORD *)(v9 + 16);
    if ( (_DWORD)v10 || DWORD2(v25) != 1 )
    {
      v15 = -2147467259;
      v18 = 47;
      goto LABEL_18;
    }
    v11 = *(_DWORD *)(v9 + 32);
    v12 = *(_DWORD *)(v9 + 36);
    v13 = *(float *)v9;
    v10 = v8 - v20;
    LODWORD(v19) = *(_DWORD *)v9;
    *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v12, v11);
    if ( (v8 - (__int64)v20) / 12 && *(float *)(v8 - 12) > v13 )
    {
      v15 = -2147467259;
      v18 = 55;
LABEL_18:
      v5 = v15;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v15, v18);
      goto LABEL_19;
    }
    if ( v21 == v8 )
    {
      std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> const &>(
        (__int64 *)&v20,
        v8,
        (__int64)&v19);
      v8 = *((_QWORD *)&v20 + 1);
    }
    else
    {
      v14 = DWORD2(v19);
      *(_QWORD *)v8 = v19;
      *(_DWORD *)(v8 + 8) = v14;
      v8 += 12LL;
      *((_QWORD *)&v20 + 1) = v8;
    }
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v22);
  }
  v16 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  if ( v16 )
  {
    *((_DWORD *)v16 + 2) = 0;
    *(_QWORD *)v16 = &Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::`vftable';
    std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
      (__int64 *)v16 + 2,
      (__int64 *)&v20);
  }
  else
  {
    v16 = 0LL;
  }
  *a3 = v16;
  if ( !v16 )
  {
    v15 = -2147024882;
    v18 = 65;
    goto LABEL_18;
  }
LABEL_19:
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Tidy(&v20);
  return v5;
}
