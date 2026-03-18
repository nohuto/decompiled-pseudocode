/*
 * XREFs of ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DCED8
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801DE034 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r10
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v22; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 12;
  if ( v7 / 12 == 0x1555555555555555LL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = v7 / 12 + 1;
  v10 = (a1[2] - *a1) / 12;
  v11 = v10 >> 1;
  if ( v10 <= 0x1555555555555555LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 12 * v12;
  if ( v12 > 0x1555555555555555LL )
    v13 = -1LL;
  v14 = 12 * v8;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v16 = (_QWORD *)v15;
  *(_QWORD *)(v14 + v15) = *(_QWORD *)a3;
  *(_DWORD *)(v14 + v15 + 8) = *(_DWORD *)(a3 + 8);
  v17 = a1[1];
  v18 = *a1;
  if ( v3 == v17 )
  {
    while ( v18 != v17 )
    {
      *v16 = *(_QWORD *)v18;
      v16 = (_QWORD *)((char *)v16 + 12);
      v22 = *(_DWORD *)(v18 + 8);
      v18 += 12LL;
      *((_DWORD *)v16 - 1) = v22;
    }
  }
  else
  {
    if ( v18 != v3 )
    {
      do
      {
        *v16 = *(_QWORD *)v18;
        v16 = (_QWORD *)((char *)v16 + 12);
        v19 = *(_DWORD *)(v18 + 8);
        v18 += 12LL;
        *((_DWORD *)v16 - 1) = v19;
      }
      while ( v18 != v3 );
      v17 = a1[1];
    }
    if ( v3 != v17 )
    {
      v20 = v15 + v14 - v3;
      do
      {
        *(_QWORD *)(v20 + v3 + 12) = *(_QWORD *)v3;
        *(_DWORD *)(v20 + v3 + 20) = *(_DWORD *)(v3 + 8);
        v3 += 12LL;
      }
      while ( v3 != v17 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(a1, v15, v9, v12);
  return v14 + *a1;
}
