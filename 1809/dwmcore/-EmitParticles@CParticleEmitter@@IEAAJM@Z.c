/*
 * XREFs of ?EmitParticles@CParticleEmitter@@IEAAJM@Z @ 0x1801C57D0
 * Callers:
 *     ?Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C7770 (-Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ??R?$_Rng_from_urng@IV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@QEAAII@Z @ 0x1801C5184 (--R-$_Rng_from_urng@IV-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP.c)
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 *     ?_Get_all_bits@?$_Rng_from_urng@IV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@QEAAIXZ @ 0x1801C7D20 (-_Get_all_bits@-$_Rng_from_urng@IV-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0.c)
 */

__int64 __fastcall CParticleEmitter::EmitParticles(CParticleEmitter *this, float a2)
{
  int v2; // edx
  float v3; // xmm2_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  int v7; // ebx
  int v8; // edx
  int all_bits; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-38h]

  v2 = 0;
  v3 = *((float *)this + 1426) - a2;
  *((float *)this + 1426) = v3;
  if ( v3 < 0.0 )
  {
    v5 = *((float *)this + 1389);
    v6 = *((float *)this + 1390);
    v16[0] = (char *)this + 548;
    v16[1] = 32LL;
    v17 = -1;
    *((float *)this + 1426) = (float)((float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 548)
                                            * (float)(v6 - v5))
                                    + v5)
                            + *((float *)this + 1426);
    v7 = *((_DWORD *)this + 1391);
    v8 = *((_DWORD *)this + 1392) - v7;
    if ( v8 == -1 )
      all_bits = std::_Rng_from_urng<unsigned int,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>::_Get_all_bits(v16);
    else
      all_bits = std::_Rng_from_urng<unsigned int,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>::operator()(
                   (__int64)v16,
                   v8 + 1);
    v10 = *((_DWORD *)this + 1395);
    v2 = all_bits + v7;
    if ( v10 > 0 )
    {
      v11 = *((_DWORD *)this + 1428);
      if ( v11 < v10 )
      {
        if ( v11 + v2 > v10 )
          v2 = v10 - v11;
      }
      else
      {
        v2 = 0;
        *((_BYTE *)this + 5708) = 0;
      }
    }
    *((_DWORD *)this + 1428) += v2;
  }
  v12 = CParticleEmitter::SpawnParticles(this, v2);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x38Eu);
  return v14;
}
