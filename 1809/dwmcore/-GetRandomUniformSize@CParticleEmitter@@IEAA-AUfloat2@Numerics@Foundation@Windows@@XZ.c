/*
 * XREFs of ?GetRandomUniformSize@CParticleEmitter@@IEAA?AUfloat2@Numerics@Foundation@Windows@@XZ @ 0x1801C649C
 * Callers:
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall CParticleEmitter::GetRandomUniformSize(__int64 a1, float *a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  float *result; // rax
  float v7; // xmm0_4

  v3 = *(float *)(a1 + 5680);
  v4 = *(float *)(a1 + 5672);
  v5 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a1 + 548);
  result = a2;
  v7 = (float)(v5 * (float)(v3 - v4)) + v4;
  *a2 = v7;
  a2[1] = v7;
  return result;
}
