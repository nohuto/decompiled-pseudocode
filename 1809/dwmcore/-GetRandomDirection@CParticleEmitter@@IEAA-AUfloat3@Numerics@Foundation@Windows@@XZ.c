/*
 * XREFs of ?GetRandomDirection@CParticleEmitter@@IEAA?AUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801C61E0
 * Callers:
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800F0003 (cosf_0.c)
 *     sinf_0 @ 0x1800F003F (sinf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801C8128 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

struct D2DVector3 *__fastcall CParticleEmitter::GetRandomDirection(__int64 a1, struct D2DVector3 *a2)
{
  float v3; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v8; // [rsp+28h] [rbp-19h] BYREF
  float v9; // [rsp+2Ch] [rbp-15h]
  int v10; // [rsp+30h] [rbp-11h]
  int v11; // [rsp+34h] [rbp-Dh]
  int v12; // [rsp+38h] [rbp-9h]
  float v13; // [rsp+3Ch] [rbp-5h]
  __int64 v14; // [rsp+40h] [rbp-1h]
  __int64 v15; // [rsp+48h] [rbp+7h]
  int v16; // [rsp+50h] [rbp+Fh]
  __int64 v17; // [rsp+54h] [rbp+13h]
  __int64 v18; // [rsp+5Ch] [rbp+1Bh]
  int v19; // [rsp+64h] [rbp+23h]

  v3 = *(float *)(a1 + 5596);
  v5 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a1 + 548)
             * (float)(v3 - COERCE_FLOAT(LODWORD(v3) ^ _xmm)))
     + COERCE_FLOAT(LODWORD(v3) ^ _xmm);
  v6 = cosf_0(v5);
  v10 = 0;
  v11 = 0;
  v9 = sinf_0(v5);
  v12 = LODWORD(v9) ^ _xmm;
  v8 = v6;
  v13 = v6;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 1065353216;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 1065353216;
  D3DXVec3Transform(a2, (const struct D2DVector3 *)(a1 + 5584), (const struct D2DMatrix *)&v8);
  return a2;
}
