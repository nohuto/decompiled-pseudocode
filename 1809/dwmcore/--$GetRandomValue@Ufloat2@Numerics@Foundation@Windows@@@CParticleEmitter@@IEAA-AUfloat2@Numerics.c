/*
 * XREFs of ??$GetRandomValue@Ufloat2@Numerics@Foundation@Windows@@@CParticleEmitter@@IEAA?AUfloat2@Numerics@Foundation@Windows@@AEBU?$Range@Ufloat2@Numerics@Foundation@Windows@@@0@@Z @ 0x1801C3D60
 * Callers:
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall CParticleEmitter::GetRandomValue<Windows::Foundation::Numerics::float2>(
        __int64 a1,
        float *a2,
        float *a3)
{
  __int64 v3; // rbx
  float v4; // xmm6_4
  float v6; // xmm7_4
  double v8; // xmm0_8
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  double v13; // xmm0_8
  float *result; // rax

  v3 = a1 + 548;
  v4 = a3[3];
  v6 = a3[1];
  v8 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a1 + 548);
  v9 = *(float *)&v8 * (float)(v4 - v6);
  v10 = a3[2];
  v11 = v9 + v6;
  v12 = *a3;
  v13 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(v3);
  a2[1] = v11;
  result = a2;
  *a2 = (float)(*(float *)&v13 * (float)(v10 - v12)) + v12;
  return result;
}
