/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E75EC
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E7F20 (-AppendFrames@-$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV-$span@$$CBUParticleBindingData@@$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@M@Particles@@_K1@Z @ 0x1801A18C0 (-_Change_array@-$vector@U-$ParticleKeyframe@M@Particles@@V-$allocator@U-$ParticleKeyframe@M@Part.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float>>(
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

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 12;
  if ( v7 / 12 == 0x1555555555555555LL )
    std::_Xlength_error((const char *)v7);
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
  std::vector<Particles::ParticleKeyframe<float>>::_Change_array((__int64)a1, v15, v9, v12);
  return v14 + *a1;
}
