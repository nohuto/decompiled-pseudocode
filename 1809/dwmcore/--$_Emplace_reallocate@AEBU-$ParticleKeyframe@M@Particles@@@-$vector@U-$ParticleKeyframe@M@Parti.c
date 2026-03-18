/*
 * XREFs of ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCD90
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD660 (-Convert@-$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV-$span@$$CBUKeyframeDat.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001B608 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float> const &>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r10
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  _QWORD *v18; // r8
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  unsigned __int64 v21; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int64)a2 - *a1;
  v5 = (a1[1] - *a1) >> 3;
  v6 = a2;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (__int64)v13;
  *(_QWORD *)((char *)v13 + v14) = *a3;
  v16 = (__int64 *)a1[1];
  v17 = (__int64 *)*a1;
  if ( v6 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *v17++;
      *v18++ = v19;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        v20 = *v17++;
        *v13++ = v20;
      }
      while ( v17 != v6 );
      v16 = (__int64 *)a1[1];
    }
    if ( v6 != v16 )
    {
      v21 = v15 + v14 - (_QWORD)v6;
      do
      {
        *(__int64 *)((char *)v6 + v21 + 8) = *v6;
        ++v6;
      }
      while ( v6 != v16 );
    }
  }
  std::vector<CVectorShape *>::_Change_array(a1, v15, v8, v11);
  return v14 + *a1;
}
