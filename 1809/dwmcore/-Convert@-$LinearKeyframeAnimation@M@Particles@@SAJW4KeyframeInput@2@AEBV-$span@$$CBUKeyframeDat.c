/*
 * XREFs of ?Convert@?$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD660
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCD90 (--$_Emplace_reallocate@AEBU-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Parti.c)
 *     ??0?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DD1C8 (--0-$vector@U-$ParticleKeyframe@M@Particles@@V-$allocator@U-$ParticleKeyframe@M@Particles@@@std@.c)
 *     ??D?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@XZ @ 0x1801DD424 (--D-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@details@gsl@@QEBAAEBUKeyframeData@@.c)
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE0C4 (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@M@Particles@@V-$allocator@U-$ParticleKeyframe@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::Convert(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  float v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // r9d
  _DWORD *v13; // rdi
  unsigned int v15; // [rsp+28h] [rbp-39h]
  __int128 v16; // [rsp+38h] [rbp-29h] BYREF
  __int128 v17; // [rsp+48h] [rbp-19h] BYREF
  __int128 v18; // [rsp+58h] [rbp-9h] BYREF
  __int128 v19; // [rsp+68h] [rbp+7h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+17h]
  __int128 v21; // [rsp+98h] [rbp+37h]
  void *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v3 = *a2;
  v4 = 0;
  v20 = 0LL;
  v19 = 0LL;
  if ( v3 )
  {
    if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<Particles::ParticleKeyframe<float>>::_Reallocate_exactly(&v19, v3);
    v3 = *a2;
  }
  *(_QWORD *)&v17 = a2;
  *((_QWORD *)&v17 + 1) = v3;
  v16 = (unsigned __int64)a2;
  v7 = (__int64 *)*((_QWORD *)&v19 + 1);
  while ( 1 )
  {
    v18 = v16;
    if ( !gsl::details::operator!=(&v18, &v17) )
      break;
    v8 = gsl::details::span_iterator<gsl::span<KeyframeData const,-1>,0>::operator*((gsl::details *)&v16);
    v9 = HIDWORD(*(_QWORD *)v8);
    v21 = *(_OWORD *)(v8 + 16);
    if ( (_DWORD)v9 || DWORD2(v21) != 1 )
    {
      v12 = -2147467259;
      v15 = 47;
      goto LABEL_22;
    }
    v10 = *(float *)v8;
    v11 = *(_DWORD *)(v8 + 32);
    LODWORD(v23) = *(_DWORD *)v8;
    HIDWORD(v23) = v11;
    if ( (__int64)((__int64)v7 - v19) >> 3 && *((float *)v7 - 2) > v10 )
    {
      v12 = -2147467259;
      v15 = 55;
LABEL_22:
      v4 = v12;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, v15);
      goto LABEL_23;
    }
    if ( v20 == v7 )
    {
      std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float> const &>(
        (__int64 *)&v19,
        v7,
        &v23);
      v7 = (__int64 *)*((_QWORD *)&v19 + 1);
    }
    else
    {
      *v7++ = v23;
      *((_QWORD *)&v19 + 1) = v7;
    }
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v16);
  }
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  if ( v13 )
  {
    v13[2] = 0;
    *(_QWORD *)v13 = &Particles::LinearKeyframeAnimation<float>::`vftable';
    std::vector<Particles::ParticleKeyframe<float>>::vector<Particles::ParticleKeyframe<float>>((_QWORD *)v13 + 2, &v19);
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
    goto LABEL_22;
  }
LABEL_23:
  std::vector<CDataSourceReader *>::_Tidy((__int64)&v19);
  return v4;
}
