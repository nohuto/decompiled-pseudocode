/*
 * XREFs of ?EmitParticles@CParticleEmitterVisual@@IEAAJMPEBUD2D_SIZE_F@@@Z @ 0x1801EC91C
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801EAC10 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EE158 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::EmitParticles(
        CParticleEmitterVisual *this,
        float a2,
        const struct D2D_SIZE_F *a3)
{
  float v4; // xmm2_4
  int v6; // ecx
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  unsigned int v14; // edx
  unsigned int v15; // r8d
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx

  v4 = *((float *)this + 1522) - a2;
  *((float *)this + 1522) = v4;
  v6 = 0;
  if ( v4 < 0.0 )
  {
    v7 = *((float *)this + 1549);
    v8 = *((float *)this + 1550);
    v9 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1084)
       * (float)(v8 - v7);
    v10 = *((float *)this + 1552);
    v11 = v9 + v7;
    v12 = *((float *)this + 1551);
    *((float *)this + 1522) = v11 + *((float *)this + 1522);
    v13 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1084);
    v14 = *((_DWORD *)this + 1554);
    v6 = (int)(float)((float)(v13 * (float)(v10 - v12)) + v12);
    if ( v14 )
    {
      v15 = *((_DWORD *)this + 1523);
      if ( v15 < v14 )
      {
        if ( v15 + v6 > v14 )
          v6 = v14 - v15;
      }
      else
      {
        v6 = 0;
      }
    }
    *((_DWORD *)this + 1523) += v6;
  }
  v16 = CParticleEmitterVisual::SpawnParticles(this, v6, a3);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x319u, 0LL);
  return v18;
}
