/*
 * XREFs of ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801FEEAC
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EE158 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801EAC10 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801FF178 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 */

__int64 __fastcall CParticleGenerator::GetRandomOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // xmm1_4
  int v5; // xmm0_4
  unsigned int v8; // xmm1_4
  __int64 RandomUnitDir; // rax
  float v10; // xmm7_4
  float v11; // xmm6_4
  unsigned __int64 v12; // xmm0_8
  int v13; // xmm2_4
  __int64 result; // rax
  int v15; // xmm1_4
  unsigned __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  _DWORD v18[4]; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+50h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 120);
  v18[0] = *(_DWORD *)(a1 + 116);
  v5 = *(_DWORD *)(a1 + 124);
  v18[1] = v3;
  v8 = *(_DWORD *)(a1 + 132);
  v18[2] = v5;
  v16 = __PAIR64__(*(_DWORD *)(a1 + 136), v8);
  v17 = *(_DWORD *)(a1 + 140);
  RandomUnitDir = GetRandomUnitDir((unsigned int)&v19, a3, (unsigned int)v18, (unsigned int)&v16, 1);
  v10 = *(float *)(a1 + 128);
  v11 = *(float *)(a1 + 144);
  v12 = *(_QWORD *)RandomUnitDir;
  LODWORD(RandomUnitDir) = *(_DWORD *)(RandomUnitDir + 8);
  v16 = v12;
  v17 = RandomUnitDir;
  *(float *)&v12 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  v13 = HIDWORD(v16);
  result = a2;
  *(_DWORD *)a2 = v16;
  v15 = v17;
  *(_DWORD *)(a2 + 4) = v13;
  *(_DWORD *)(a2 + 8) = v15;
  *(float *)(a2 + 12) = (float)(*(float *)&v12 * (float)(v11 - v10)) + v10;
  return result;
}
